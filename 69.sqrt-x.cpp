/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
    public:
    int mySqrt(int x) {
        if(x == 1) return 1;
        int left = 0;
        int right = x ;
        int mid;
        while(left <= right) {
             mid = left + (right - left) >> 1;
            if(mid * mid == x) return mid;
            if(mid * mid < x) left = mid +1;
            if(mid * mid > x) right = mid -1;
            if((mid * mid < x) && ((mid+1)*(mid+1) > x)) return mid;
        }
        return mid;
    }
};
// @lc code=end

