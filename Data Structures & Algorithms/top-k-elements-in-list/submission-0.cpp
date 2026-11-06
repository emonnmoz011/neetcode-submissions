
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> counts;
        priority_queue<pair<int, int>> pq;
        vector<int> output;

        for(const auto& i: nums)
        {
            counts[i]++;
        }
        
        for(const auto& p: counts)
        {
            pq.push({p.second, p.first});
        }

        for (int i = 0; i < k; i++)
        {
            output.push_back(pq.top().second);
            pq.pop();
        }

        return output;
    }
};
