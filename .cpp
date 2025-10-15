class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // If no strings are given, return empty string
        if (strs.empty()) return "";
        
        // Sort the array of strings
        sort(strs.begin(), strs.end());
        
        int len = strs.size();
        string first = strs[0];
        string last = strs[len - 1];
        string ans = "";

        // Compare first and last string after sorting
        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i]) {
                ans += first[i];
            } else {
                break;
            }
        }

        return ans;
    }
};
