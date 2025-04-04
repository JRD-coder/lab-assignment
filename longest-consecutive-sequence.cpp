class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m.insert({nums[i],i});
        }
        int f=0;
        vector<int> v;
        v.push_back(f);
        auto it=m.begin();
        if(it!=m.end())
        it++;
        else return 0;
        while(it != m.end()){
            if((*it).first-(*(--it)).first==1){
                f++;
            }
            else {
                if(f!=0)
                v.push_back(f);
                f=0;
            }
            it++;
            it++;
        }
        v.push_back(f);
        auto i=max_element(v.begin(),v.end());
        return (*i)+1;
    }
};
