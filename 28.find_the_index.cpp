class Solution {
public:
    int strStr(string h, string n) {

        if(n.length() > h.length())
            return -1;

        for(int i = 0; i <= h.length() - n.length(); i++) {

            int j = 0;

            while(j < n.length() && h[i + j] == n[j]) {
                j++;
            }

            if(j == n.length()) {
                return i;
            }
        }

        return -1;
    }
};