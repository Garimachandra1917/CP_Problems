//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int n = s.length();
       // n=n+1;
        
        //char* char_array = new char[n];
        //strcpy(char_array, s.c_str());
        
        //traverse the string in reverse order
        //first occurance from the back is the last occurance in real of "1"
        for(int i=n-1;i>=0;i--)
        {
           if(s[i]=='1')
           return i;
        }
        return -1;
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends