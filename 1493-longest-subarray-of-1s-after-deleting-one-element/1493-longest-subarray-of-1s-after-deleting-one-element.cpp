class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int head=0,tail=0,len=0,c=0;
        
        //sliding window concept
        //itterate the head pointer
        for(head=0;head<nums.size();head++)
        {   
            //increament counter if found zero only one zero allowed
            if(nums[head]==0)
            {
                c++;
            }
            
            //if more than one 0 found in window , 
            //shrink the window till only one zero is left is the window
            while(c>1)
            {
                if(nums[tail]==0)
                {
                    c--;
                }
                tail++;
            }
            
            //at each position of head and tail check for the max window size
            //take the max of the previous window and the current window
            //head-tail+1 gives the actual len since we have to delete an element 
            //therefore, take head-tail
            len = len>head-tail ?len:head-tail;
        }
        return len;
    }
};