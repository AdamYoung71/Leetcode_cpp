/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
//二分查找

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        short n = nums.size();
        short l=0,r=n-1;
        while(l<=r){
            short mid=l+(r-l)/2;
            if(nums[mid]<target)
                l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};

// @lc code=end

