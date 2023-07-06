class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int len =INT_MAX;
    int head,tail=0,sum=0;
        
        //itterate through the array
    for(head=0;head<nums.size();head++)
    {   
        //add till you get the value equal to greater than the target value
        sum+=nums[head];
        
           //now to achieve the smallest array 
           //start taking out the elements from the start,till the sum is greater or equal to target
           while(sum>=target)
           {   
               //each time update the length
               len=min(len,head-tail+1);
               sum-=nums[tail];
               tail++;
               
           } 
       
    }
    
    //if the len has not updated even once , sum never reaches to target
    if(len==INT_MAX)return 0;
        
    else return len;
        
    }
};