class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        int coverage =0; int lastjump =0;
        if(n==1)return 0;
        for(int i=0;i<n;i++){
            coverage = max(coverage,i+nums[i]);
            if(i==lastjump){
                lastjump = coverage;
                count ++;
            
            if(coverage>= n-1){
                return count;
            }}
        }
        return count;
    }
};