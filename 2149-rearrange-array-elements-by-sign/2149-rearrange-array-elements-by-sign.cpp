class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pos_index=0; //in effective array pos element will start from 0th index 
        int neg_index=1;  //in effective array neg element will start from 1st index 
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                v[pos_index]=nums[i];
                pos_index+=2;//pos numbers will be stored at indices 0,2,4,6...
            }
            else
            {
                v[neg_index]=nums[i];
                neg_index+=2;//neg numbers will be stored at indices 1,3,5,7,...
            }
        }
        return v;
    }
};