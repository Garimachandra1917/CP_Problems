class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int m=target.size();
        if(n!=m)
            return false;
        if (target==mat) //0 degree rotations 0 = 360
            return true;
        int degree=3; //to check for 90,180,270
        while(degree--)
        {
            for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        
        if(target==mat)
        {
            return true;
        }
        }
        
        return false;
    }
};