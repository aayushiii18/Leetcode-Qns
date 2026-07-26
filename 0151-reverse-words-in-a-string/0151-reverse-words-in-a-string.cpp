class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        int i=n-1;
        bool first=true;
        while(i>=0){
            while(i>=0&&s[i]==' '){
                i--;
            }
            if(i<0) break;
            int j=i;
            while(i>=0&&s[i]!=' '){
                i--;
            }
            if(!first){
                ans+=" ";
            }
            for(int k=i+1;k<=j;k++){
                ans.push_back(s[k]);
            }
            first=false;
        }
        return ans;
    }
};