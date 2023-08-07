class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) 
    {
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 0, high = (n*m)-1;
        
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            int r = mid/m;
            int c = mid%m;
            
            if(mat[r][c] == t)
            {
                return true;
            }
            else if(mat[r][c] > t)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return false;
    }
};