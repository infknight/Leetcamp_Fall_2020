class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() <= 1){
            return nums;
        }
        unordered_map<int, int> M; 
        vector<int> ans; 
        for(int i = 0; i < nums.size(); i++){
            if(M.find(target - nums[i])!=M.end()){
                ans.push_back(i);
                ans.push_back(M[target - nums[i]]);
                break;
            }
            M[nums[i]] = i; 
        }
        return ans; 
    }
};