class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n + 1, 0);  // boxes labeled 0 to n, all start at 0
        vector<int> ans;              // to store final duplicates

        // Step 1: Fill the boxes (count occurrences)
        for (int i = 0; i < n; i++) {
            count[nums[i]]++;
        }

        // Step 2: Check which boxes have count == 2
        for (int val = 1; val <= n; val++) {
            if (count[val] == 2) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};