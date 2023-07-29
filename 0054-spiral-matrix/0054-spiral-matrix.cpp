class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
    int n=matrix.size();
    int m=matrix[0].size();
    int top=0,left=0;
    int bottom=n-1,right= m-1;
    
    //till any row or coloumn exists
    while(top<=bottom && left<=right)
    {
       //left->right
       for(int i=left;i<=right;i++)
       {
            v.push_back(matrix[top][i]);
       }
       top++;

       //top->bottom
       for(int i=top;i<=bottom;i++)
       {
            v.push_back(matrix[i][right]);
       }
       right--;

       //right->left
      if(top<=bottom)
      {
           for(int i=right;i>=left;i--)
       {
            v.push_back(matrix[bottom][i]);
       }
       bottom--;
      }

       //bottom->top
      if(left<=right)
      {
           for(int i=bottom;i>=top;i--)
       {
            v.push_back(matrix[i][left]);
       }
       left++;
      }
    }
   return v;
    }
};