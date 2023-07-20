class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size(),c=1;
        
        //itterate through the array ckecking by making each element as the start
        for(int i=0;i<n;i++)
        {  
            int c=1;
            // now checking from the ith location to remaining n-1 elements
            //are they in sorted order
            for(int j=0;j<n-1;j++)
            {   
                //using modulo n to move towards the back of the array as well
                if(nums[(i+j)%n]<=nums[(i+j+1)%n])
                { 
                    c++;
                }
            }
            // when c==n i.e each element after the start is sorted 
              if(c==n)
              {
                    return true;
              }
        }
        
        //if c never became n i.e its not a rotated sorted array
    return false ;
    }
        
};