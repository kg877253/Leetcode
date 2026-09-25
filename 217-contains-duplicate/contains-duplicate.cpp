class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> seen;
        for(int i =0;i<nums.size();i++){
            int num = nums[i];
            if(seen.find(num)!=seen.end()){
                return true;
            }
            seen.insert({num,1});  
        }
        return false;
    }
};