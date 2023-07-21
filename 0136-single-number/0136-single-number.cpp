//T(N^2) linear search
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n=nums.size(),cnt;
// 	for(int i=0;i<n;i++)
// 	{    cnt=0;
// 		for(int j=0;j<n;j++)
// 		{
// 			if(nums[i]==nums[j])
// 			{
// 				cnt++;
// 			}
// 		}
// 		if(cnt==1)
// 		{
// 			return nums[i];
// 		}
// 	}
// 	return -1;
//     }
// };
//------------------------------------------------------------------------------

//2.T(N), S(N) Hashing using map

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
	map <int ,int> mp;
	for(int i=0;i<n;i++)
	{    
		mp[nums[i]]++;
	}

	for(auto i :mp)
	{
		if(i.second!=2)
		   return i.first;
	}
	return -1;
    }
};


































