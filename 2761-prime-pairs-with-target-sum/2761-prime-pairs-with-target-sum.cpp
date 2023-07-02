/* Approach : Sieve of Eratothanes
1. Find all prime numebrs <= n using sieve method
2. Find all pairs by running a loop on sieve array
Time : O(n * loglogn)       // for creating sieve array
Space : O(n)                // for sieve array
*/

class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        // Create Sieve vector
        vector<bool> sieve(n+1, true);
        sieve[0] = sieve[1] = false;
        for(int i=2; i*i<=n; i++){
            if(sieve[i]){
                for(int j=i*i; j<=n; j=j+i)
                    sieve[j] = false;
            }
        }

        // store prime pairs
        vector<vector<int>> ans;
        for(int i=2; i <= n/2; i++)
            if(sieve[i] && sieve[n-i])
                ans.push_back({i, n-i});    
        return ans;
    }
};
