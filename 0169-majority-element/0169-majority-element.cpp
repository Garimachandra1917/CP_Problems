// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         map <int ,int> mp;
//         for(int i=0;i<n;i++)
//         {
//             mp[nums[i]]++;
//         }
        
//         for(auto i : mp)
//         {
//             if(i.second> n/2)
//             {
//                 return i.first;
//             }
//         }
//         return -1;
//     }
// };


//Moore's voting algorithm:
//inituition : if an element occurs more than n/2 times it cant be cancelled by other elemts completely ever
//T(N)  S(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),cnt=0,ele;
        for(int i=0;i<n;i++)
        {   
            //if cnt ==0 , inc. the cnt and make the current element as the new element
            if(cnt==0)
            {
                cnt=1;
                ele=nums[i];
            }
            //inc the counter when the same element is found
            else if(ele==nums[i])
                cnt++;
            //if any other element is found dec the counter
            else 
                cnt--;
        }
        
        //if there might be a condition that there exists no majority element 
        // we confirm that our element is the majority element
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==ele)
                cnt1++;
        }
        if(cnt1>n/2)
            return ele;
        return -1;
    }
};

