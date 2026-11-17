class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int cur = 1;
        for(int i=0; i<nums.size(); i++) {
            if(i+1<nums.size()) {
                if(nums[i]+1 == nums[i+1])
                    cur++;
                else if(nums[i] == nums[i+1])
                    continue;
                else cur = 1;
            } else {
                cur = 1;
            }
            ans = max(ans, cur);
        }
        return ans;
    }
};
