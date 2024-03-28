class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int n = nums.size();
        map<int, int>m;
        int i =0, j=0;
        int ans =1;
        while(i<n && j<n)
        {
            m[nums[j]]++;
            while(m[nums[j]]>k)
            {
                m[nums[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};