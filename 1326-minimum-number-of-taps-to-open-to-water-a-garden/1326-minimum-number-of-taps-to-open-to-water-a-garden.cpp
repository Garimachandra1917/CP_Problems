class Solution {
public:
    bool static compare(pair<int,int> p1,pair<int,int> p2)
    {
        if(p1.first!=p2.first) return p1.first<p2.first;
        return p1.second>=p2.second;
    }
    int minTaps(int n, vector<int>& arr) {
        vector<pair<int,int>> intr;
        int m = arr.size();
        for(int i = 0;i<m;i++)
        {
            int strt = max(0,i-arr[i]);
            int end =  min(n,i+arr[i]);
            if(strt!=end)
            intr.push_back({strt,end});
        }
        if(intr.size()==0) return -1;
        sort(intr.begin(),intr.end(),compare);
        if(intr[0].second==0) return -1;
        int count = 1,strt = intr[0].first,end = intr[0].second;
        int maxend = 0,i= 0;
        for(int i = 1;i<intr.size();i++)
        {
            if(end>=n) return count;
            if(intr[i].first>end)
            {
                if(intr[i].first>maxend) return -1;
                end = maxend;
                count++;
            }
            maxend = max(maxend,intr[i].second);
        }
        if(maxend<n) return -1;
        if(end<maxend) count++;
        
        return count;
    }
};