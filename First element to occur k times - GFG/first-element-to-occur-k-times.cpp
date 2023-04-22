//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    { 
        int m=*max_element(a,a+n);
        //  creating array of size equal to the max element of given array 
        //to store count of each element
       int b[m] ={0};
       
       for(int i=0;i<n;i++){
           //incrementing count of each elemt of a[] at the index-1 in b[]
           b[a[i]-1]+=1;
           //as soon as count of any element reaches k return its corresponding value in a[]
           if(b[a[i]-1]==k){
               return a[i];
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(a, n, k)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends