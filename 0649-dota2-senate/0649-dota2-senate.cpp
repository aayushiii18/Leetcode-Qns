class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr;
        queue<int> qd;
        int n=senate.size();
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                qr.push(i);
            }
            else{
                qd.push(i);
            }
        }
        while(!qr.empty() && !qd.empty()){
            if(qr.front()<qd.front()){
                qd.pop();
                int rdata=qr.front();
                qr.pop();
                qr.push(rdata+n);
            }
            else{
                qr.pop();
                int ddata=qd.front();
                qd.pop();
                qd.push(ddata+n);
            }
        }
        if(qr.empty()){
            return "Dire";
        }
        else{
            return "Radiant";;
        }
        
    }
};