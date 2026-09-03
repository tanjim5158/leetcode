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
