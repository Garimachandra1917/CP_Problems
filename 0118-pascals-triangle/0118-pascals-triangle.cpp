class Solution {
public:
    vector<int> generateRow(int row)
    {
        vector<int>ans;
        long long val=1;
        ans.push_back(val);
        for(int col= 1;col<row;col++)
        {
            val=val*(row-col);
            val=val/col;
            ans.push_back(val);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
      for(int i=1;i<=numRows;i++)
      {
         triangle.push_back(generateRow(i)); 
      }
        return triangle;
    }
};