class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int>first,second,count;
        for(int i=0;i<nums.size();i++){
            if(first.count(nums[i])==0) first[nums[i]]=i;
            second[nums[i]]=i;
            count[nums[i]]++;
        }
        int maxi=0;
        
        for(auto x:count) maxi=max(maxi,x.second);
        
        int ans=nums.size();
        for(auto x:count){
            if(x.second==maxi){
                ans=min(ans,second[x.first]-first[x.first]+1);
            }
        }
        return ans;
    }
};