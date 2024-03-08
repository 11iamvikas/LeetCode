class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int>mp;
        for(auto i : nums) mp[i]++;
        
        int maxi=-1;
        for(auto i : mp){
            maxi = max(maxi, i.second);
        }
        int total =0;
        for(auto i : mp){
            if(maxi == i.second) total+=i.second;
        }
        return total;
    }
};