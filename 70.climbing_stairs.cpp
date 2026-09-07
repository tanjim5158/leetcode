class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 2;
        int  i = 2;
        if(n==1)return a;
        while(i<n){
            int c = a+b;
            a=b;
            b=c;
            i++;
        }
        return b;
    }
};