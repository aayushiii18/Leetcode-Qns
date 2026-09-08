class Solution {
public:
    int calculate(string s) {
        long long result=0;
        long long sign=1;
        stack<long long> st;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                long long num=0;
                while(i<s.size() && isdigit(s[i])){
                 num=num*10 +(s[i]-'0');
                 i++;
                }
                i--;
                result+=num*sign;
            }
            else if(s[i]=='+'){
              sign = 1;
            }
            else if(s[i]=='-'){
                sign = -1;
            }
            else if(s[i]=='('){
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            else if(s[i]==')'){
                int prevsign=st.top();
                st.pop();
                int prevresult=st.top();
                st.pop();
                result=prevresult+prevsign*result;
            }
        }

           

        return result;
        
    }
};