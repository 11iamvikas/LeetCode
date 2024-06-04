class Solution {
public:
    int longestPalindrome(const std::string& s) {
        std::unordered_set<char> charSet;
        int length = 0;
        for (char c : s) {
            if (charSet.find(c) != charSet.end()) {
                charSet.erase(c);
                length += 2;
            } else {
                charSet.insert(c);
            }
        }
        
        if (!charSet.empty()) {
            length += 1;
        }
        
        return length;
    }
};
