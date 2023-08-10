class Solution {
public:
    bool search(vector<int>& a, int k) 
    {
        int low = 0, high = a.size()-1;
        
        while(low <= high)
        {
            int mid = (low + high)/2;
            
            if(a[mid] == k)
            {
                return true;
            }
            
            if(a[mid] == a[low] && a[mid] == a[high])
            {
                low++, high--;
                continue;
            }
            
            if(a[mid] >= a[low])
            {
                if(k >= a[low] && k < a[mid])
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
                if(k > a[mid] && k <= a[high])
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return false;
    }
};