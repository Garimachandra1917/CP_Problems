//1. T(N^2) S(1) 
//using 2 loop
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     int n=nums.size();
;     vector <int> v;
    //taking each elemnt ,except the last one because it would be already checked
    for(int i=0;i<n-1;i++)
    {
        //take second element 
        //to avoid duplication start from i+1
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
               v.push_back(i);
               v.push_back(j);
                return v;
            }
        }
    }
      
    return {-1,-1};
    }
};