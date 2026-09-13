class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<n+1;i++){
            q.push(i);
        }
        int m=q.size();
        while(q.size()!=1){
           for(int j=1;j<k;j++){
                int data=q.front();
                q.pop();
                q.push(data);
           }
           q.pop();

           

        }
           
        return q.front();
        
    }
};