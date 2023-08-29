class Solution {
public:
    int bestClosingTime(string str) {
        
        str = "a" + str;
        str = str + "a";
        int n = str.length();
        vector<int>A(n + 2,0);
        vector<int>B(n + 2,0);
        int min_penalty = n;
        int res = 0;
        for(int i = n - 2; i>= 0; i--)
        {
            A[i] = A[i + 1];
            if(str[i] == 'Y')
                A[i] += 1;
        }
        for(int i = 1; i < n; i++)
        {
            B[i] = B[i - 1];
            if(str[i] == 'N')
                B[i] += 1;
        }
        for(int i = n - 1; i >= 1; i--)
        {
            if(min_penalty >= A[i] + B[i - 1])
            {

                min_penalty = A[i] + B[i - 1];
                res = i - 1;
            }
        }


    return res;
        
    }
};