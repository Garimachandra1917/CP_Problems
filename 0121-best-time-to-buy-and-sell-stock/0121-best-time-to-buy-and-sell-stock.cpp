// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++)// day of buying
//         {
//             for(int j=i+1;j<n;j++)//day of selling ->since, sell will be after buying therefore,j=i+1 
//             {
//                 if(prices[j]-prices[i]>maxi)//finding the pair with the max differnce
//                 {
//                     maxi=prices[j]-prices[i];
//                 }
//             }
//         }
        
//         if(maxi<0)
//             return 0;
//         return maxi;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=INT_MAX;//minimum  so far
        int maxprofit=0;//max profit so far
        int curprofit;// profit if we sell today
        mini=prices[0];
        for(int i=1;i<n;i++)
        {
            curprofit=prices[i]-mini;
            maxprofit=max(maxprofit,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
      return maxprofit;
        
    }
};








































