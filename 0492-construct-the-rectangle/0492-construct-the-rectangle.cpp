class Solution {
public:
    vector<int> constructRectangle(int area) {
        int L = area;
        int W=1;
        for(int i =1; i<=area/i;i++){
            if(area%i==0 && area/i-i<L-W){
                L= area/i;
                W=i;
            }
        }
        return {L,W};
    }
};