//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        
        long long int modd;
       // modd=(int)(pow(10, 9)+1e-9)+7;
         modd=pow(10,9)+7;
        long long int sum=0;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
           
           sum=sum%modd+((a[i]%modd)*(i%modd))%modd;
           
        }
        
        sum=sum%modd;
        return sum;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends