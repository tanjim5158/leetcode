class Solution {
public:
    bool canJump(vector<int>& n) {
        int finalposition = n.size()-1;
        for(int i=n.size()-2;i>=0;i--){
            if(i+n[i]>=finalposition){
                finalposition = i;
            }
        }
        return finalposition ==0;
    }
};