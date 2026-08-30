class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Count characters required from t
        for (char c : t) {
            need[c]++;
        }

        int low = 0;
        int high = 0;

        int formed = 0;
        int required = need.size();

        int minLen = INT_MAX;
        int start = 0;

        while (high < s.size()) {

            // Add s[high] to window
            char c = s[high];
            window[c]++;

            // This character has now satisfied its requirement
            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }

            // Window is valid
            while (formed == required) {

                // Update minimum answer
                if (high - low + 1 < minLen) {
                    minLen = high - low + 1;
                    start = low;
                }

                // Remove s[low]
                char leftChar = s[low];
                window[leftChar]--;

                // Window became invalid
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    formed--;
                }

                low++;
            }

            high++;
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};