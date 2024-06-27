class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> charSet;
        int left = 0, right = 0, maxLength = 0;

        while (right < s.size()) {
            // 檢查 s[right] 是否在 charSet 中
            if (charSet.count(s[right]) == 0) {
                // 如果 s[right] 不在 charSet 中，將其插入
                charSet.insert(s[right]);
                // 更新最大無重複子串的長度
                maxLength = std::max(maxLength, right - left + 1);
                // 擴展窗口
                right++;
            } else {
                // 如果 s[right] 已經在 charSet 中，移除 s[left] 並收縮窗口
                charSet.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};
