class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count =1;
        int a = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==a){
                count ++;
            }
            else{
                if(count == 0){
                    a = nums[i];
                }
                else if(nums[i]!=a && count >0){
                    count --;
                }
            }
        }
        return a;
    }
};