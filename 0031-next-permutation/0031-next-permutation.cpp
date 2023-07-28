class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int index=-1;//to keep a track of the break point
        
        //1. find the break point or dip in the value from the back to achieve longest prefix
        for(int i=n-2 ;i>=0;i--)
        {    //find the first break point and break
            if(nums[i]<nums[i+1])
            {
                index=i;
                break;
            }
        }
        
        //if no dip exits ->provided permutation is the last one 
        //its next permutation will be the first one , to achieve that reverse the entire array
        if(index==-1)
        {
            reverse(nums.begin(), nums.end());
            return ;
        }
        
        //if dip found 
        // swap it with the nearest greatest number 
        //since, its an inc. graph the very first greater from the index comparing back will be the nearest           greater
        for(int i=n-1;i>index;i--)
        {
            if(nums[i]>nums[index])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        
        //now reverse the array after the index to acheive the nearest permutation
        reverse(nums.begin()+index+1 , nums.end());
    }
};