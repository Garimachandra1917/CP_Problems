class Solution {
public:
    int search(vector<int>& a, int t) 
    {
        int low = 0, high = a.size()-1;
        
        while(low <= high)
        {
            int mid = (low + high)/2;
            
            if(a[mid] == t)
            {
                return mid;
            }
            
            if(a[low] <= a[mid])
            {
                if(t >= a[low] && t < a[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else
            {
                if(t > a[mid] && t <= a[high])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};