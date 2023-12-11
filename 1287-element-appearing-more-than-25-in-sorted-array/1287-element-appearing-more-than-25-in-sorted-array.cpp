class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        int freq = n/4;
        for(int &num : arr){
            mp[num]++;
            if(mp[num]>freq){
                return num;
            }
        }
        return -1;
    }
};