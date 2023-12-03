#define li long int
class Solution {
public:
    bool isPerfectSquare(int num) {
       li high = 100000;
        li low =1;
        li mid;
        li sq;
        while(low<=high){
            mid = low +(high-low)/2;
            sq = mid*mid;
            if(sq==num)
                return true;
            else if(sq>num)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
};