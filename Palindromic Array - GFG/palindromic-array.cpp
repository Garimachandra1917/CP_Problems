//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int i,reverse =0 ,b, remainder1;
    	//traverse all the elements
    	for(i=0;i<n;i++)
       {   
           //store each element in a variable to later match it with its reversed value
           b=a[i];
           //reverse the no.
           while(b!=0)
           {
            remainder1= b%10;
            reverse = reverse*10+remainder1;
            b/=10;
           }
           //if any element doesnt match with its reverse , return 0 (not a palindrome)
           if(reverse != a[i])
           {
               return 0;
           }
           
           //reinitialize reverse as 0 for the next element 
           reverse =0;
       }
       return 1;
    
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends