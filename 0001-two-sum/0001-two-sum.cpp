//1. T(N^2) S(1) 
//using 2 loop
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//      int n=nums.size();
// ;     vector <int> v;
//     //taking each elemnt ,except the last one because it would be already checked
//     for(int i=0;i<n-1;i++)
//     {
//         //take second element 
//         //to avoid duplication start from i+1
//         for(int j=i+1;j<n;j++)
//         {
//             if(nums[i]+nums[j]==target)
//             {
//                v.push_back(i);
//                v.push_back(j);
//                 return v;
//             }
//         }
//     }
      
//     return {-1,-1};
//     }
// };


//2. Using Hashing 
//T(NlogN)     S(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> v;
        map <int, int>mp;
        
       //taking each elemnt 
       for(int i=0;i<n;i++)
      {
           //if a+b=target -> target-a=b ->if b is present in the array(map) we find
           int needed= target- nums[i];
       if(mp.find(needed)!=mp.end())
       {
          
           return {mp[needed],i};
       }
           //if not present till this index , add the element in the map
      else
      {
          mp[nums[i]]=i;
      }
           
      }
      
      return {-1,-1};
    }
};




















