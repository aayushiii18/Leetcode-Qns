class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int n=sandwiches.size();
        for(int i=n-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        while(!q.empty()&& !st.empty()){
         int count=0;
         int m=q.size();
         while(q.front()!=st.top() && count<m){
            int data=q.front();
            q.pop();
            q.push(data);
            
            count++;
         }
         if(count == m){
          break;
         }
         else if(q.front()==st.top()){
            q.pop();
            st.pop();
         }
        }
        return q.size();
        
    }
};