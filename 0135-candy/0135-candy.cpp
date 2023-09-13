class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>ans(n,1);
        int p=1;
        for(int i=0;i<n-1;i++){
            if(ratings[i]<ratings[i+1]){
                ans[i]=p++;
                ans[i+1]=p;
            }
            else p=1;
        }
        p=1;
        for(int i=n-1;i>0;i--){
            if(ratings[i]<ratings[i-1]){
                ans[i]=p++;
                ans[i-1]=max(ans[i-1],p);
                }
            else p=1; 
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ans[i];
        }
        return sum;
    }
};
