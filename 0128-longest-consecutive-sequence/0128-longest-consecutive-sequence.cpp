//1.for brute solution ->go on each element and do a linear search for the next element of the sequence
// update longest Sequence each time and return the max one


//2. Better T(NlongN) S(1)
// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//        int n=nums.size();
//         int lastSmaller =INT_MIN;//to check if the previous element exits
//         int cnt=0,longSec=0;
        
//         //sort the array to club elements
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<n;i++)//while itterating through each element
//         {
//             if(nums[i]-1==lastSmaller)//if prev element exits put in seq
//             {
//                 cnt++;
//                 lastSmaller =nums[i];
//             }
//             //if we encounter the same element again we dont do anything just inc. pointer
            
//             else if(nums[i]!=lastSmaller)//when curr element not a part of seq also not equal to the prev                                               one ->start fresh 
//             {
//                 cnt=1;
//                 lastSmaller = nums[i];
//             }
//            longSec = max(longSec,cnt); //update the longset seq 
//         }
       
//         return longSec;
//     }
// };


//3. Using Unordered set 
//S(N) best->T(3N) worst(N^2)

//2. Better T(NlongN) S(1)
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
        int cnt=0,longSec=0;
        unordered_set <int> set;
        for(int i=0;i<n;i++)//insert elements in set {T(1) for each element}
        {
            set.insert(nums[i]);
        }
        
        for(auto i: set)
        {
            if(set.find(i-1)==set.end())//if the i-1 do not exists in set ->i=start else move to next elemt
            {
                cnt=1;
                int x=i;
                while(set.find(x+1)!=set.end())//if start found keep on checking for seq . till found
                {
                    x=x+1;
                    cnt++;
                }
            }
            
            longSec=max(longSec,cnt);//update longest Seq
        }
        
       
        return longSec;
    }
};

































