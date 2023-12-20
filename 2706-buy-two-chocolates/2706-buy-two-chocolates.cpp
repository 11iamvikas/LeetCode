class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // find two minimum elements
        int min = INT_MAX;
        int secondMin = INT_MAX;
        for(int i =0; i<prices.size(); i++){
            if(prices[i] <= min){
                secondMin = min;
                min = prices[i];
            } else if(prices[i] > min && prices[i] < secondMin){
                secondMin = prices[i];
            } 
        }
        int totalCost = min + secondMin;
        if(money >= totalCost) return money - totalCost;
        return money;
    }
};