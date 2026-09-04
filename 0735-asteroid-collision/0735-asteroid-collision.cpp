class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        stack<int> st2;
        
        for(int i=0;i<asteroids.size();i++){

              int second=asteroids[i];
              bool destroyed=false;
              
              while(!st.empty() && st.top()>0 && second<0){
                int first=st.top();
                if(first > -second){
                    destroyed=true;
                    break;
                }
                else if(first == -(second)){
                    destroyed=true;
                    st.pop();
                    break;
                }
                else if(first < -second){
                    st.pop();
                   
                }
              }
                
            
            
            if(destroyed==false){
                st.push(second);
            }
        }
             
            
        
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        while(!st2.empty()){
            ans.push_back(st2.top());
            st2.pop();
        }
        return ans;
        
    }
};