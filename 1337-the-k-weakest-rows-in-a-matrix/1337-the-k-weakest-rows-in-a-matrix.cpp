class Solution {
public:
    static bool customComparator(const pair<int, int>& pair1, const pair<int, int>& pair2) {
        // Increasing order based on the first element
        if (pair1.first < pair2.first) {
            return true;
        } else if (pair1.first > pair2.first) {
            return false;
        } else {
            // If the first elements are the same, compare based on the second element
            return pair1.second < pair2.second;
        }
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        vector<pair<int, int>> vec_pair;
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            vec_pair.push_back({sum, i});
        }

        sort(vec_pair.begin(), vec_pair.end(), customComparator);
        for (auto i : vec_pair) {
            if (k == 0) break;
            ans.push_back(i.second);
            k--;
        }
        return ans;
    }
};