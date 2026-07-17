class Solution {
public:
    bool canFinish(vector<int>&piles,int h,int speed){
        long long totalhours=0;
        for(int banana:piles){
            totalhours+=(1LL*banana+speed-1)/speed;
        }
        return totalhours<=h;
    }

    int minEatingSpeed(vector<int>&piles,int h){
        int st=1;
        int end=*max_element(piles.begin(),piles.end());
        int ans=end;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(canFinish(piles,h,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }

        return ans;
    }
};