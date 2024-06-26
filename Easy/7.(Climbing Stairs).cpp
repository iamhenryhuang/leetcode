class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);
        return climbStairsHelper(n, memo);
    }
    
    int climbStairsHelper(int n, vector<int>& memo) {
        if (n <= 2) {
            return n;
        }
        if (memo[n] != -1) {
            return memo[n];
        }
        memo[n] = climbStairsHelper(n - 1, memo) + climbStairsHelper(n - 2, memo);
        return memo[n];
    }
};

// solution
這是一個費式數列的問題，用遞迴去解，但因為會超時，所以需要使用帶記憶化的遞迴方法
