class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set<vector<int>> st;
       int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff)
                    {
                        vector<int>temp={nums[i],nums[j],nums[k]};
                        st.insert(temp);
                    }
                }
            }
        }
        
        for(auto i: st)
        {
            cnt++;
        }
        return cnt;
    }
};