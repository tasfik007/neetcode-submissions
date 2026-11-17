class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1) return nums.size();

        sort(nums.begin(), nums.end());

        int ans = 1;
        int cur = 1;

        for(int i=0; i+1<nums.size(); i++) {
            if(nums[i]+1 == nums[i+1])
                cur++;
            else if(nums[i] == nums[i+1])
                continue;
            else cur = 1;
            ans = max(ans, cur);
        }
        
        return ans;
    }
};
