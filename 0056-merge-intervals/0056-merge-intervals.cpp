class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)//take one interval and compare with the remaing
        {
           if(ans.empty()||ans.back()[1]<intervals[i][0])
           {
               ans.push_back(intervals[i]);
           }
            else
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
        }
        
       return ans; 
    }
};