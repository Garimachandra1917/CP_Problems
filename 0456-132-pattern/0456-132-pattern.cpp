class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        std::stack<std::pair<int, int>> stack;
        int cur_min = INT_MAX;

        for(int n: nums){
            while(!stack.empty() && stack.top().first <= n){ //find j val
                stack.pop();
            }
            //stack.top().first will be a value greater than n
            if(!stack.empty() && n > stack.top().second){
                //return true if n is greater than the min of the values (the i value) before j.
                return true;
            }
            stack.push({n, cur_min});
            cur_min = std::min(cur_min, n);
        }
        return false;
    }
};