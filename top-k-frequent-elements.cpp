class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        vector<int> v;
        auto it = m.begin();
        auto ma = m.begin();
        int max = it->second;
        for(int i=0;i<k;i++){
            while(it!=m.end()){
                if(it->second>max) {max = it->second; ma=it;}
                it++;
            }
            v.push_back(ma->first);
            m.erase(ma);
            if(!m.empty()){
        it = m.begin();
        max = it->second;
        ma = m.begin();
            }
            else break;
        }
        return v;
    }
};
