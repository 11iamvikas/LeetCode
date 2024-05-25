class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_map<int, vector<string>> memo;
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        return wordBreakHelper(s, 0, dict, memo);
    }

private:
    vector<string> wordBreakHelper(const string& s, int start, const unordered_set<string>& dict, unordered_map<int, vector<string>>& memo) {
        if (memo.find(start) != memo.end())
            return memo[start];

        vector<string> validSubstr;

        if (start == s.length())
            validSubstr.push_back("");
        for (int end = start + 1; end <= s.length(); ++end) {
            string prefix = s.substr(start, end - start);
            if (dict.find(prefix) != dict.end()) {
                vector<string> suffixes = wordBreakHelper(s, end, dict, memo);
                for (const string& suffix : suffixes) {
                    validSubstr.push_back(prefix + (suffix.empty() ? "" : " ") + suffix);
                }
            }
        }

        memo[start] = validSubstr;
        return validSubstr;
    }
};