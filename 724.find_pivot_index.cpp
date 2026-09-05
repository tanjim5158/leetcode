class Solution {
public:
    int pivotIndex(vector<int>& n) {
        int leftsum =0;
        int total =0;
        for(int i: n) total+=i;
        for(int i=0;i<n.size();i++){
            int rightsum = total - leftsum - n[i];
            if(leftsum == rightsum)return i;
            leftsum += n[i];
        }
        return -1;
    }
};