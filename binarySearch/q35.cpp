class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // we define this problem with [left, right)
        // since every integers are distince, we can apply binary search
        int left = 0;
        int right = nums.size();
        int mid = (left + right) / 2;
        while(left < right) // since the left == right is meaningful.
        {
            if(nums[mid] > target) //
            {
                right = mid ;
                mid = (left+right) / 2;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
                mid = (left+right) / 2;
            }
            else
            {
                return mid;
            }
        }
        return mid;
    }
};