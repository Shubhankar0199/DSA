class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int low = 0;
        int high = 0;
        int ans = 0;

        while (high < s.size()) {
            mp[s[high]]++;

            while (mp[s[high]] > 1) {
                mp[s[low]]--;
                low++;
            }

            ans = max(ans, high - low + 1);
            high++;
        }

        return ans;
    }
};