class DSU{
    vector<int> parent;
    vector<int> rank;
public:
    DSU(int n){
        rank.resize(n,0);
        parent.resize(n);
        for(int i=0;i<n;++i){
            parent[i]=i;
        }
    }
    int findpar(int node){
        if(parent[node]==node){
            return node;
        }
        return parent[node]=findpar(parent[node]);
    }
    void merge(int n1, int n2){
        int ulp1=findpar(n1);
        int ulp2=findpar(n2);
        if(ulp1==ulp2){
            return;
        }
        if(rank[ulp1]==rank[ulp2]){
            parent[ulp1]=ulp2;
            rank[ulp2]++;
        }else if(rank[ulp1]>rank[ulp2]){
            parent[ulp2]=ulp1;
        }else{
            parent[ulp1]=ulp2;
        }
    }
};
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        //MST
        //store all the edges in a vector (n2) edges and then traverse over all edges in increasing order and cgeck if adding this edge does not create a cycle
        vector<pair<int,vector<int>>> edges;
        for(int i=0;i<points.size();++i){
            for(int j=i+1;j<points.size();++j){
                edges.push_back({abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]),{i,j}});
            }
        }
        sort(edges.begin(),edges.end());
        DSU graph(points.size());
        int taken=0;
        int edgeind=0;
        pair<int,vector<int>> curEdge;
        int ans=0;
        while(taken<points.size()-1){
            curEdge=edges[edgeind++];
            if(graph.findpar(curEdge.second[0])!=graph.findpar(curEdge.second[1])){
                // cout<<"taking edge between "<<points[curEdge.second[0]][0]<<","<<points[curEdge.second[0]][1]<<" and "<<points[curEdge.second[1]][0]<<","<<points[curEdge.second[1]][1]<<" at a cost of "<<curEdge.first<<endl;
                graph.merge(curEdge.second[0],curEdge.second[1]);
                ans+=curEdge.first;
                taken++;
            }
        }
        return ans;
    }
};