class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int freq[26]={0};
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int maxfreq=0;
                int minfreq=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>maxfreq){
                        maxfreq=freq[k];
                    }
                    if(freq[k]>0 && freq[k]<minfreq){
                        minfreq=freq[k];
                    }
                }
                sum+=maxfreq-minfreq;
               
                


            }
        }
        return sum;
        
    }
};