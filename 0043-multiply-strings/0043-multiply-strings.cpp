class Solution {
public:
    string multiply(string num1, string num2) {
        // handle edge-case where the product is 0
        if (num1 == "0" || num2 == "0") return "0";
        
        // num1.size() + num2.size() == max no. of digits
        vector<int> num(num1.size() + num2.size(), 0);
        
        // build the number by multiplying one digit at the time
        for (int i = num1.size() - 1; i >= 0; --i) {
            for (int j = num2.size() - 1; j >= 0; --j) {
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                num[i + j] += num[i + j + 1] / 10;
                num[i + j + 1] %= 10;
            }
        }
        
        // skip leading 0's
        int i = 0;
        while (i < num.size() && num[i] == 0) ++i;
        
        // transofrm the vector to a string
        string res = "";
        while (i < num.size()) res.push_back(num[i++] + '0');
        
        return res;
    }
};