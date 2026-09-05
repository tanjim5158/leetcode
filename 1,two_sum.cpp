class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        
       return ans; 
        
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& a, int tar) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            int first = a[i];
            int sec = tar - first;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};
