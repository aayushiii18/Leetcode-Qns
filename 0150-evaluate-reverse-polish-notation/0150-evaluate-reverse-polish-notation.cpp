class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                
                int add=first+second;
                st.push(add);

            }
            else if(tokens[i]=="*"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int multiply=first*second;
                st.push(multiply);
            }
            else if(tokens[i]=="-"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int minus=second-first;
                st.push(minus);
            }
            else if(tokens[i]=="/"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                int divide=second/first;
                st.push(divide);
            }
        }
        return st.top();

        
    }
};