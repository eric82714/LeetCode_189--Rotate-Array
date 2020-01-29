class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k %= nums.size();
        
        vector<int> tmp(nums.size(), 0);
        
        for(int i = k; i > 0; i--) {
            tmp[k-i] = nums[nums.size()-i];
        }
        
        for(int i = 0; i < nums.size()-k; i++) {
            tmp[k+i] = nums[i];
        }
            
        nums = tmp;
    }
};
