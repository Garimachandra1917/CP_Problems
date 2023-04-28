//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> v;
        
        //to store max element in the right
        int max1=a[n-1];
        v.push_back(max1);
        //traverse the array in opposite 
        //to have the maximum element from the right 
        for(int i=n-2;i>=0;i--)
        {
            //if an element of array is greater than the max element of its right
            //then it will be leader
            if(max1<=a[i])
            {
                max1=a[i];
                v.push_back(a[i]);
            }
            //reinitialize the max as the new leader
            
        }
        
        //reverse the vector as the question needs the ans in the order 
        //of their appearance of the array
        reverse(v.begin(), v.end());
        return v;
    }
    
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends