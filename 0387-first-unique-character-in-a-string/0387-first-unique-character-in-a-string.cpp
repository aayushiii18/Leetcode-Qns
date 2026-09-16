class Solution {
public:
    int firstUniqChar(string s) {
        queue<int> q;
        int freq[26]={0};
        for(int i=0;i<s.size();i++){
            char character= s[i];
            if(s[i]==character){
                freq[s[i]-'a']++;

            }
        }
        for(int i=0;i<s.size();i++){
            if (freq[s[i]-'a']==1){
                return i;
            }

        }
        
        return -1;
    }
};