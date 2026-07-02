class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int i=n-1;
        vector<int> ans(n);
        while(left<=right){
            int ls=nums[left]*nums[left];
            int rs=nums[right]*nums[right];
            if(ls<rs){
                ans[i]=rs;
                right--;}
            else{
                ans[i]=ls;
                left++;
            }
            i--;
            }
            return ans;
        
    }
};