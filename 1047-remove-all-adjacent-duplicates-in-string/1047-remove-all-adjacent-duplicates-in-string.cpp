class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        string rev;
        stack <char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
              st.push(s[i]);
            }
            else if(s[i]==st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }

        }
        while(!st.empty()){
            rev.push_back(st.top());
            st.pop();
        }
        reverse(rev.begin(),rev.end());
        ans=rev;
        return ans;


        
    }
};