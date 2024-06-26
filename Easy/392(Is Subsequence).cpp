class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_index = 0, t_index = 0;
        
        while (s_index < s.size() && t_index < t.size()) {
            if (s[s_index] == t[t_index]) {
                s_index++;
            }
            t_index++;
        }

        // if s is on its last position
        return s_index == s.size();
    }
};

// solution
開兩個變數s_index, t_index去紀錄s跟t的相對位置，最後判斷s_index是否走到s的最後面
