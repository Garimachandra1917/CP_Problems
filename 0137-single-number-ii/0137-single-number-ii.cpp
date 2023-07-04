class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //if size of vector is less than 3 
        if(nums.size()<3) 
        {
            return nums[0];
        }
        
        //sort the vector
        sort(nums.begin(),nums.end());
        
        //if the first element is the unique element
        if(nums[0]!=nums[1])
        {
            return nums[0];
        }
        
        //if the unique element lies between second to n-1 element 
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i-1]!=nums[i]&& nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        
        //if the unique element is the last element 
        return nums[nums.size()-1];
        
    }
};