//METHOD >1 .brute ->take 3 loops and take each triplet and find if its sum==0 ->sort ->put in a set to avoid duplicates->T(N^3) S(3+no.of unique triplets (for set)+ no.of unique triplets (for vector display/return)) 

//METHOD . 2 better using set to hash third value = -[first,second]  T(N^2+logN) S(N+3+)
// #include<bits/stdc++.h>
// vector<vector<int>> triplet(int n, vector<int> &arr)
// {
//     // Write your code here.
//     set<vector<int>> st;
   
//     for(int i=0;i<n;i++)
//     {    
//          set<int> value;
//         for(int j=i+1;j<n;j++)
//         {
//             int third = -(arr[i]+arr[j]);
//             if(value.find(third)!=value.end())
//             {
//                 vector<int> temp= {arr[i],arr[j],third};
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//             }
//             value.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     sort(ans.begin(),ans.end());
//     return ans;
// }

//METHOD .3 best -sort array-> fix first element and use two pointer approach to find rest two elements
//T(N+NlogN) S(3)+unique triplets to return
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end()); //sort array
        for(int i=0;i<n;i++)
        {
            if(i>0&& nums[i-1]==nums[i])//avoid duplicate elements
            {
                continue;
            }
            int j=i+1,sum=0;
            int k=n-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(sum<0) // if sum less ->inc 
                {
                    j++;
                }
                else if(sum>0) // if sum more ->dec
                {
                    k--;
                }
                else //if equal -> push in vector and inc j and k ->if value same inc and dec j N k to                                   avoid duplicates
                {
                    vector<int>temp={nums[i] ,nums[j] ,nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j])j++;
                    while(j <k && nums[k+1]==nums[k])k--;
                }
            }
        }
       return ans; 
    }
};




























