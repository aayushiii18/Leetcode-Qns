class Solution {
public:
   int search(vector<int>& nums, int target){
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int middle=(st+end)/2;
            if(nums[middle]<target){
              st=middle+1;
            }
            else if(nums[middle]>target){
               end=middle-1;
            }
            else if(nums[middle]==target){
                return middle;
            }
        }
        

    return -1;
    }
};