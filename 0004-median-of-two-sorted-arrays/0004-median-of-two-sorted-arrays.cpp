class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        if(m>n)
            return findMedianSortedArrays(nums2, nums1);
        int l =0, r = m;
        while(l<=r){
            int p1 = (l+r)/2;
            int p2 = (m+n+1)/2 - p1;
            
            int max_l1 = (p1 == 0) ? INT_MIN : nums1[p1-1];
            int min_r1 = (p1 == m) ? INT_MAX : nums1[p1];
            int max_l2 = (p2 == 0) ? INT_MIN : nums2[p2-1];
            int min_r2 = (p2 == n) ? INT_MAX : nums2[p2];
            
            if( (max_l1<= min_r2) && (max_l2 <= min_r1)){
                if((m+n) %2 == 0)
                    return (max(max_l1, max_l2) + min(min_r1, min_r2))/2.0;
                return max(max_l1, max_l2);
            }
            else if(max_l1 > min_r2){
                r = p1-1;
            }
            else{
                l = p1+1;
            }
        }
        return -1;
    }
};