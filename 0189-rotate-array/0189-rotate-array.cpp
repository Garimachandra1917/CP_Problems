//1.T(N^2) , S(1)
//-----------------------------------------------

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n=nums.size();
//         while(k--)
//         {
//             int last= nums[n-1];
//             for(int i=n-2;i>=0;i--)
//             {
//                 nums[i+1]=nums[i];
//             }
//             nums[0]=last;
//         }
        
//     }
// };
//-------------------------------------------------------

//2.T(N) ,S(d)
//---------------------------------------------------------------

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n= nums.size();
//         //step.1 : effective rotations
//         int d=k%n;
        
//         //step.2 : moving the d elements in an auxiliary array/vector of d size (S(d))
//         vector<int> v;
//           int j=n-1,p=d;
//         while(p--)
//         {
//           v.push_back(nums[j]);
//             j--;
//         }
        
//         //step.3 : shift the elements backward
//         for(int i=n-d-1;i>=0;i--)
//         {
//             nums[d+i]=nums[i];
//         }
        
//         //step.4 : put back the elements from the auxiliary array back to the main array 
//         for(int i=0;i<d;i++)
//         {
//             nums[d-i-1]=v[i];
//         }
        
//     }
// };

//------------------------------------------------------------------------------------

//3. T(N),S(1)
//-------------------------------------------------------------------


class Solution {
public:
    
    void swap(int i ,int j ,vector<int>& nums)
    {
       while(i<j)
       {
           int temp;
           temp=nums[i];
           nums[i]=nums[j];
           nums[j]=temp;
           i++;
           j--;
       }
    }
    
    void rotate(vector<int>& nums, int k) {
       
        //step 1. : effective rotations
        int n=nums.size();
        int d=k%n;
        
        // step .2.: reverse the subarray from n-dth element to last
        swap(n-d,n-1,nums);
        
        //step.3 .: reverse the subaray from the 0th location to the n-d-1th elemt 
        swap(0,n-d-1,nums);
        
        //step.4: reverse the entire array
        swap(0,n-1,nums);
        
    }
};



















































