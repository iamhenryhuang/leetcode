class Solution {
public:
    double myPow(double x, long n) {
        double ans = 1;
        if(n == 0) return 1;
        else if(x == 0) return 0;
        else if(n < 0) {
            n = n * (-1);
            x = 1 / x;
        }
        while(n == 0) {
            if(n % 2 == 0) {
                x = x * x;
                n = n / 2;
            } else {
                n = n - 1;
                ans = ans * x;
            }
        }
        return ans;
    }
};

// ssolution 快速冪
如果次方是偶數，利用 x^2k，把x^2先算，再^k，這樣次方(n)每次都要除二
如果次方是奇數，利用 x^(2k+1)，拆成x * x^2k，先算x^1，剩下直接變回偶數方法去算
