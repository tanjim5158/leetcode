class Solution {
public:
    int removeDuplicates(vector<int>& n) {

        int j = 1;

        for(int i = 1; i < n.size(); i++) {

            if(n[i] != n[i-1]) {
                n[j] = n[i];
                j++;
            }
        }

        return j;
    }
};