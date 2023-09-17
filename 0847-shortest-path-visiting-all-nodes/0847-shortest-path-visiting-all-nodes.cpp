class Solution {
public:
    int solve(vector<vector<int>> &g){
       int n=g.size();
       int all=(1<<n)-1;
       queue<pair<int, pair<int, int>>> q;
       set<pair<int, int>> vis;
       for(int i=0;i<n;i++){
         int mask=(1<<i);
         q.push({i, {0, mask}});
         vis.insert({i, mask});
       }
       while(!q.empty()){
         auto node=q.front();
         q.pop();
         int val=node.first, dist=node.second.first, 
             mask=node.second.second;
         for(auto nbr : g[val]){
           int newmask=(mask | (1<<nbr));
           if(newmask==all){
             return dist+1;
           }
           else if(vis.count({nbr, newmask})){
             continue;
           }
           else
           {
             q.push({nbr, {dist+1, newmask}});
             vis.insert({nbr, newmask});
           }
         }    
       }
       return 0;
    }
    int shortestPathLength(vector<vector<int>>& graph) {
       int n=graph.size();
       if(n==1){
         return 0;
       }
       return solve(graph);
    }
};