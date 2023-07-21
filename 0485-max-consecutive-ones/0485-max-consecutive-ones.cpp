class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int head=0,len=INT_MIN,cnt=0,n=nums.size();
        while(head<n)
        {
            if(nums[head]==1)
            {
                cnt++;
                head++;
            }
            else 
            {
                head=head+1;
                cnt=0;
            }
            len=max(len,cnt);
        }
        return len;
    }
};