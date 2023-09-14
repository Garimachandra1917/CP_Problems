class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string, multiset<string>> graph;        
        for (const auto& ticket : tickets) {
            graph[ticket[0]].insert(ticket[1]);
        }
        
        vector<string> itinerary;
        dfs("JFK", graph, itinerary);        
        reverse(itinerary.begin(), itinerary.end());
        return itinerary;
    }
    
    void dfs(string airport, unordered_map<string, multiset<string>>& graph, vector<string>& itinerary) {
        while (!graph[airport].empty()) {
            string next = *graph[airport].begin();
            graph[airport].erase(graph[airport].begin());
            dfs(next, graph, itinerary);
        }
        
        itinerary.push_back(airport);
    }
};
