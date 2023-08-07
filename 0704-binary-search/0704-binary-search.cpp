// //1. Recursive Approach
// class Solution {
// public:
//    //binary search function
// int BS(vector<int> &nums , int low, int high , int target)
// {   
//     //base case: if search space exhausts
//     if(low>high)
//        return -1;

//     //find mid 
//     //for overflow case  mid = low+ (high-mid)/2;   
//     //or take mid as long long . only valid till INT_MAX at max.
//     int mid =(low+high)/2; 
    
//     //if value is found
//     if(nums[mid]==target)
//         return mid;

//     //if target greater than the mid -> shift the search space to right 
//     //mid+1 to high

//     else if(target> nums[mid])
//         return BS(nums, mid+1, high, target);

//     //if target lesser than the mid -> shift the search space to left 
//     //low to mid-1  
//     else 
//         return BS(nums, low , mid-1, target);


// }

// int search(vector<int> &nums, int target) {
//     // Write your code here.
//     int n=nums.size();
//     int low=0;
//     int high = n-1;
//     return BS(nums,low,high,target);
// }
// };




//2. Itterative Approach

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int low=0; 
        int high = n-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                low= mid+1;
            else 
                high=mid-1;
        }
        return -1;
    }
};





















