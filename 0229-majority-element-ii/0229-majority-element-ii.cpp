class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
	int n=nums.size();
	int cnt1=0,cnt2=0;
	int ele1,ele2;
	for(int i=0;i<n;i++)
	{
		if(cnt1==0 && nums[i]!=ele2)
		{
			cnt1=1;
			ele1=nums[i];
		}
		else if(cnt2==0 && nums[i]!=ele1)
		{
			cnt2=1;
			ele2=nums[i];
		}
		else if(nums[i]==ele1)
		{
			cnt1++;
		}
		else if(nums[i]==ele2)
		{
			cnt2++;
		}
		else
		{
			cnt1--;
			cnt2--;
		}
	}
    cnt1=0;cnt2=0;
	for(int i=0;i<n;i++)
	{
		if(nums[i]==ele1)
	        cnt1++;
		else if(nums[i]==ele2)
		    cnt2++;
	}
	if(cnt1>floor(n/3))
	    ans.push_back(ele1);
	if(cnt2>floor(n/3))
	    ans.push_back(ele2);
	sort(ans.begin(),ans.end());
	return ans;
    }
};