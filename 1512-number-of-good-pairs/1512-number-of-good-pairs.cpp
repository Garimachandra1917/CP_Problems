class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
           int n = nums.size();
           int count  =0;
           int i,j;
           for( i=0; i< n; i++)
           {
               for(j=0; j<n; j++)
               {
                   if( i < j && nums[i] == nums[j])
                   count ++;
               }
           } 
           return count;
    }
};