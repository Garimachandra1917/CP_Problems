//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     int m,n,i,j;
     m=s.length();
     n=x.length();
     for(i=0;i<m-n+1;i++)
     {
         for(j=0;j<n;j++)
         {
             if(x[j]!=s[i+j])
                break;
         }
         if(j==n){
             return i;
         }
     }
     return -1;
}