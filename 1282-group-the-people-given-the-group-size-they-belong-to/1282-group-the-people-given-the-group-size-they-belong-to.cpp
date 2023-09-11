class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> mp;
        vector<vector<int>> res;
        int n = groupSizes.size();

        for(int i = 0; i < n; i++){
            mp[groupSizes[i]].push_back(i);
            if(mp[groupSizes[i]].size() == groupSizes[i]){ 
                res.push_back(mp[groupSizes[i]]);
                mp[groupSizes[i]].clear();
            }
        }
        return res;
    }
};