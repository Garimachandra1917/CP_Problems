class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) 
    {
        if(hour < dist.size()-1)
        {
            return -1;
        }
        
        double sum, ans = -1;
        int n = dist.size();

        long low = 1, high = pow(10,7);
        
        while(low <= high)
        {
            long mid = (low + high)/2;
            sum = 0;
            
            for(int i = 0; i < n; i++)
            {
                sum = ceil(sum);
                sum = sum + (double)dist[i]/mid;
            }
            if(sum <= hour)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return ans;
    }
};