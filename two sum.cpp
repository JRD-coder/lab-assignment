class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int d=0;
            d=target-nums[i];
            if(m.find(d)!=m.end()){
                return {m[d],i};
            }
            m.insert({nums[i],i});
        }
        return {};
    }
};
