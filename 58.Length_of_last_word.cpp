class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count =0;
        int j =n-1;
        for(int i =n-1;i>=0;i--){
            if(isalpha(s[i])){
                int j =i;
                while(j>=0 && isalpha(s[j])){
                    count ++;
                    j--;
                }
                return count;
            }
        }
        return count;
    }
};