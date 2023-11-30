class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        for(int i =0; i<nums.size(); i++){
            ans^=(nums[i]^i);
        }
        ans^=(n);
        return ans;
    }
};