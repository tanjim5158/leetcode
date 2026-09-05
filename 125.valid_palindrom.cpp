class Solution {
public:
    bool a(char a){
        if((a >= '0' && a<='9')|| (tolower(a)>='a'&& tolower(a)<='z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int j = s.size()-1;int i=0;
        
        while(i<j){
           if(!a(s[i])){
            i++;continue;
           }
           if(!a(s[j])){
            j--;continue;
           }
           if(tolower(s[i])!= tolower(s[j])){
            return false;
           }
           i++;j--;
        }
        return true;
    }
};