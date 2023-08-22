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
            
            if(a[low] <= a[mid])  //if left half sorted
            {
                if(t >= a[low] && t < a[mid]) // if t lies in the left half
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else // else if right half is sorted
            {
                if(t > a[mid] && t <= a[high]) //if t lies in the right half
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
        return -1;  //value not found
    }
};