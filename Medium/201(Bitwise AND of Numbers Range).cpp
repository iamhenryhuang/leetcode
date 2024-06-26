class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        while(left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        return left << shift;
    }
};

// solution
從左邊找共同前綴，然後left, right的所有bits往右移，shift為記錄移了幾次，直到left==right，最後在把left往左移shift步
