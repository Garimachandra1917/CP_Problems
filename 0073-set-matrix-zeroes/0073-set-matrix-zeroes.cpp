class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //rows= [i][0];
        //cols =[0][j];
        int col1 =1;
        for(int i=0; i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    if(j!=0)
                      matrix[0][j]=0;
                    else 
                      col1=0;
                }
            }
            
        }

        for(int i =1;i<matrix.size();i++){
            for(int j=1;j<matrix[0].size();j++){
                if((matrix[i][0]==0)|| (matrix[0][j]==0))
                   matrix[i][j]=0;
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=0;j<matrix[0].size();j++){
                matrix[0][j]=0;
            }
        }
        
        if(col1==0){
            for(int i=0;i<matrix.size();i++){
                matrix[i][0]=0;
            }
        }
        
        
    }
};