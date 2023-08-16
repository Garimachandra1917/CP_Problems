class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
    // vector<int> p{-1,-1};
    int first=-1;
    int last=-1;
    int low= 0;
    int high= n-1;
        //for finding the first occurance
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid]==target)
        {
            first=mid;//might be an answer
            high=mid-1; // try to find in the left to find smaller index
        }
        else if(nums[mid]<target)
        {
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(first==-1)
    {
        return {-1,-1};
    }
    

        //for finding the last occurance
    low=0;high=n-1;
    
     while(low<=high)
    {
        int mid = (low+high)/2;
        if(nums[mid]==target)
        {
            last=mid;//might be an answer
            low=mid+1;// try to find in the right side to find larger index
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
    }
    return {first,last};
        
    }
};