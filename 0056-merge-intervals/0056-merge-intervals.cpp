class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)//take one interval and compare with the remaing
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && ans.back()[1]>=end)//dont take if already taken in any other interval
            {
                continue;
            }
            for(int j=i+1;j<n;j++)//compare with rest to check which needs to be taken
            {
                if(end>= intervals[j][0])
                {
                    end=max(end,intervals[j][1]);
                }
                else 
                {
                    break;
                }
            }
            ans.push_back({start,end});
        }
        
       return ans; 
    }
};