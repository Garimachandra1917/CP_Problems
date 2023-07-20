// 1.//T(N^2)
// //S(1)

// class Solution {
// public:
//     bool check(vector<int>& nums) {
//     int n= nums.size(),c=1;
        
//         //itterate through the array ckecking by making each element as the start
//         for(int i=0;i<n;i++)
//         {  
//             int c=1;
//             // now checking from the ith location to remaining n-1 elements
//             //are they in sorted order
//             for(int j=0;j<n-1;j++)
//             {   
//                 //using modulo n to move towards the back of the array as well
//                 if(nums[(i+j)%n]<=nums[(i+j+1)%n])
//                 { 
//                     c++;
//                 }
//             }
//             // when c==n i.e each element after the start is sorted 
//               if(c==n)
//               {
//                     return true;
//               }
//         }
        
//         //if c never became n i.e its not a rotated sorted array
//     return false ;
//     }    
        
// };


/*2.--------------------------------------------------------------------------------------------------*/
//T(N)
//S(1)

class Solution {
public:
    bool check(vector<int>& nums) {
        
        int n=nums.size(),c=0;
        // if there exits more than 2 breakpoints 
        //i.e . array not behaving in correct manner 
        //for more than 1 times 
        //array is not rotated sorted arrray
        for(int i=0;i<n;i++)
        {   
            // check for each elemt next elemt should be greater
            if(nums[i%n]>nums[(i+1)%n])
            {
                c++;
            }
        }
        //if there exits more than 1 check points return false
        if(c<=1)
            return true;
        else
             return false;
    }
};
    
    
















































































    
    