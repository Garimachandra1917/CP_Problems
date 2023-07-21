// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//       sort(nums.begin(),nums.end());
//         int n=nums.size(),i;
//         for(i=0;i<n;i++)
//         {
//             if(i!=nums[i])
//                 return i;
//         }
//         if(i==n)
//         {
//             return n;
//         }
//         return -1;
//     }
// };

//--------------------------------------------------------------------------------------

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum1=(n*(n+1))/2;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum2+=nums[i];
        }

            return sum1-sum2;
        
    }
};



















