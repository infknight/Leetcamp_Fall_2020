class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 0){
            return 0; 
        }
        int global_sum = INT_MIN; 
        int temp_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            temp_sum = max(nums[i], temp_sum + nums[i]); 
            if(global_sum < temp_sum){
                global_sum = temp_sum; 
            }
        }
        return global_sum; 
    }
}; // 1 4 