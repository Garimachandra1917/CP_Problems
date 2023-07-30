class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum=0,cnt=0;
        int j=0;
        map <int,int>map;
        int n=nums.size();
        map[0]=1;
        for(int i=0;i<n;i++)
        {
            prefixSum+=nums[i];
            int rem=prefixSum - k;
            cnt+= map[rem];
            map[prefixSum]++;
        }
    
        return cnt;
    }
};