class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sorted;
        sorted.reserve(nums1.size() + nums2.size());
        sorted.insert(sorted.end(), nums1.begin(), nums1.end());
        sorted.insert(sorted.end(), nums2.begin(), nums2.end());
        
        sort(sorted.begin(), sorted.end());

        int len = sorted.size();
        if (len % 2 == 0) {
            return (sorted[len / 2 - 1] + sorted[len / 2]) / 2.0;
        } else {
            return sorted[len / 2];
        }
    }
};

// solution
把nums1跟nums2放進sorted裡面，然後用sort函式將sorted內從小排到大，再找出平均數
