//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector <int> v;
    int first,last,fflag=0,lflag=0 ,i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x && fflag==0){
            v.push_back(i);
            fflag++;
            break;
        }
    }
    if(i==n)
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
        
    }
     for(j=n-1;j>=0;j--)
    {
        if(arr[j]==x && lflag==0){
            v.push_back(j);
            lflag++;
            break;
        }
    
        
    }
    return v;
    
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends