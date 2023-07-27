//T(2N) S(3)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int cnt0=0,cnt1=0,cnt2=0;
        
        //count the occcurances of 0's ,1's and 2's in the given array
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cnt0++;
            }
            else if(nums[i]==1)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        
        //now place them in place with the help of their number of occurances
        
        for(int i=0;i<cnt0;i++)
        {
            nums[i]=0;
        }
        for(int i=cnt0;i<cnt0+cnt1;i++)
        {
            nums[i]=1;
        }
        for(int i=cnt0+cnt1;i<n;i++)
        {
            nums[i]=2;
        }
    }
};