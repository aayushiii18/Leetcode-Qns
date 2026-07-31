class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            int left=i,right=i;
            while(left>=0&&right<n&&s[left]==s[right]){
                left--;
                right++;
            }
            string sub=s.substr(left+1,right-left-1);
            if(sub.size()>ans.size()) ans=sub;
            left=i;
            right=i+1;
            while(left>=0&&right<n&&s[left]==s[right]){
                left--;
                right++;
            }
            sub=s.substr(left+1,right-left-1);
            if(sub.size()>ans.size()) ans=sub;
        }
        return ans;
    }
};