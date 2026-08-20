class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastpos[256] = {};
        int left = 0;
        int length = 0;
        for (int right = 0; right < s.length(); right++) {       
            if (lastpos[s[right]] > left) {
                left = lastpos[s[right]];
            }
            length = max(length, right - left + 1);
            lastpos[s[right]] = right + 1;
        }
        return length;
    }
};