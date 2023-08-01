#include<cmath>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum , n=nums.size(),diff=INT_MAX,close;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i-1]==nums[i])
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum==target)
                    return sum;
                if(abs(target-sum)<diff)
                {
                    diff=abs(target-sum);
                    close=sum;
                }
                if(sum<target)
                    j++;
                else if(sum>target)
                    k--;
            }
        }
        return close;
    }
};