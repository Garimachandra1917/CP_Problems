class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || n==2)return 1;
        bool f1 = 1,f2 = 1;
        bool vis1 = 0, vis2 = 0;

        if(nums[0] <= nums[1]){
            vis1 = 1;
            for(int i=1;i<n-1;i++){
                if(nums[i] > nums[i+1])f1 = 0;
            }
        }

        if(nums[0] >= nums[1]){
            vis2 = 1;
            for(int i=1;i<n-1;i++){
                if(nums[i] < nums[i+1])f2 = 0;
            }
        }

    return (vis1&&vis2)?(f1||f2):(f1&&f2);
    }
};
