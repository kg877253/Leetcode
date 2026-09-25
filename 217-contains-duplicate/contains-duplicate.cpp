class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;   
        
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            if(seen.find(num) != seen.end()){
                return true;
            }
            seen.insert(num);  
        }
        return false;
    }
};