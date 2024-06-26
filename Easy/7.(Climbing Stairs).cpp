class Solution {
public:
    int climbStairs(int n) {
        // 初始化記憶化數組，大小為 n + 1，所有元素初始值為 -1
        vector<int> memo(n + 1, -1);
        return climbStairsHelper(n, memo);
    }
    
    int climbStairsHelper(int n, vector<int>& memo) {
        // 基本情況：如果 n <= 2，直接返回 n
        if (n <= 2) {
            return n;
        }
        // 如果已經計算過 memo[n]，則直接返回該值
        if (memo[n] != -1) {
            return memo[n];
        }
        // 計算 climbStairs(n - 1) 和 climbStairs(n - 2) 並存儲在 memo[n] 中
        memo[n] = climbStairsHelper(n - 1, memo) + climbStairsHelper(n - 2, memo);
        return memo[n];
    }
};
