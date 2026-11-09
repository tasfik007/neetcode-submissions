class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> fq;
        for(int num:nums){
            fq[num]++;
        }
        priority_queue< pair<int,int>, vector<pair<int, int>>, greater<pair<int, int>> > minHeap;

        for(auto entry : fq) {
            minHeap.push({entry.second, entry.first});
        }

        while(minHeap.size() > k) {
            minHeap.pop();
        }

        vector<int> ans;
        while(minHeap.size() > 0) {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;

    }
};
