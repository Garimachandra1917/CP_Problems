class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixSum=0,cnt=0;
        int j=0;
        map <int,int>map;
        int n=nums.size();
        map[0]=1; //for a case where an individual element is a subarray [0,0,0,3]=subarray=4 to consider 3 as a subarray of k=3
        for(int i=0;i<n;i++)
        {
            prefixSum+=nums[i];// calculate prefixSum 
            int remove=prefixSum - k; //calulate how much we need remove to make the subarray
            cnt+= map[remove];//how many times "remove" could be removed to get all possible subarrays  
            map[prefixSum]++;//add current prefixSum also to the hash map  
        }
    
        return cnt;
    }
};