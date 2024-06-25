class Solution {
public:
    int integerBreak(int n) {
        if(n <= 3) return n - 1;
        if(n % 3 == 0) return pow(3, n/3);
        if(n % 3 == 1) return pow(3, n/3-1)*4;
        else return pow(3, n/3)*2;
    }
};

// solution
find the regular pattern
if n == 12 -> 12%3 == 0 -> 3+3+3+3==12 -> 3*3*3*3 MAX
if n == 13 -> 13%3 == 1 -> 3+3+3+4==13 -> 3*3*3*4 MAX
if n == 14 -> 14%3 == 2 -> 3+3+3+3+2==14 -> 3*3*3*3*2 MAX
