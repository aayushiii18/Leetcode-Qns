class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string part;
        stack<string> st;

        while(getline(ss, part, '/')){
            if(part=="" || part=="."){
                continue;
            }
            else if(part==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(part);
            }
        }

        string ans;
        stack<string> st2;

        while(!st.empty()){
            st2.push("/" + st.top());
            st.pop();
        }

        while(!st2.empty()){
            ans += st2.top();
            st2.pop();
        }
        if(ans==""){
          return "/";
        }

        return ans;
    }
};