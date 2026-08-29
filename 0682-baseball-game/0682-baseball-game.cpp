class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0;i< operations.size();i++){
            if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C"){
             st.push(stoi(operations[i]));
            }
            else if(operations[i]=="+"){
                int first=st.top();
                st.pop();
                int second=st.top();
                st.push(first);
                st.push(first+second);

            }
            else if(operations[i]=="D"){
                int value=2*st.top();
                st.push(value);
            }
            else if(operations[i]=="C"){
                st.pop();
            }
            

        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();

        }

        return sum;
    
    
    }
};