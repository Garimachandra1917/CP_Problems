class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        //step .1 .: find the index where the first Zero(0) occurred
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                j=i;
                break;
            }
        }
        
        //if j==-1 means 0 never occurred hence send back the original array
        if(j==-1)
        {
            return ;
        }
        
        //step. 2.: place i one index ahead of j
        // if i points at a non-zero number swap with j(which is pointing at a zero)
        //this shifts the non-zero number ahead in the array and zero at the back
        for(int i=j+1;i<n;i++)
        {
            if(nums[i]!=0)
            {
                 int temp=nums[i];
                 nums[i]=nums[j];
                 nums[j]=temp;
                 j++; // move j only when swap happens ,i.e it always points at a "zero"
            }
        }
    
    }
};