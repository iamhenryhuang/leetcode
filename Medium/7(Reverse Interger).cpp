class Solution {
public:
    int reverse(int x) {
        long result = 0;
        while (x != 0) {
            int temp = x % 10;
            result = result * 10 + temp;
            x /= 10;
            if (result > INT_MAX || result < INT_MIN) return 0;
        }
        return result;
    }
};

// solution
long result -> 避免溢出
透過取餘數把最後一位數抓出來，然後丟進result，再每次乘10(往前推，以利加入新的數值)
