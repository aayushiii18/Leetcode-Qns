class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int> q;
        for(int i=0;i<deck.size();i++){
            q.push(i);
        }
        int i=0;
        vector<int> redeck(deck.size());
        while(i<deck.size()){
            int pos=q.front();
            q.pop();
            redeck[pos] = deck[i];
         if(!q.empty()){
            int data=q.front();
            q.pop();
            q.push(data);
            
         }
         i++;
        }
        



      return redeck;  
    }
};