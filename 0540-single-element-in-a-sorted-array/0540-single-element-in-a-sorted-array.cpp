class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<end){
            int mid=(st+end)/2;
            if (mid%2==0){
            if(nums[mid]==nums[mid+1]){
                st=mid+2;
            }
            else{
                end=mid;
            }
            }
            else{
            if(nums[mid]==nums[mid-1]){
                st=mid+1;
            }
            else{
                end=mid;
            }
            }
        }
        return nums[end];

    
    }
};