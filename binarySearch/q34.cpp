class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // since we need to solve this problem in O(log n),
        // we can do multiple binary search to find the target in the vector
        int left = 0;
        int right = nums.size() - 1;
        int mid = binarySearch(nums, left, right , target);
        if(mid == -1) // can't find.
        {
            return {-1,-1};
        }
        // since we can determine the val is left bound or right bound, or even the mid of boundary.

        // we can use a loop to search multiple times until we find the right or left bound.
        int leftBound,rightBound;
        int val = mid;
        while(true)
        {
            val = binarySearch(nums,left,val-1,target);
            if(val == -1)
            {
                break;
            }
            else
            {
                leftBound = val;
            }
        }
        while(true)
        {
            val = binarySearch(nums,val+1,right,target);
            if(val == -1)
            {
                break;
            }
            else
            {
                rightBound = val;
            }
        }
        return {leftBound,rightBound};
    }

    int binarySearch(vector<int>& nums,int front, int end, int target) {
        int mid = (front+end)/2 ;
        while(front <= end) // i use <= since front == left is meaningful.
        {
            if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                front = mid + 1;
            }
            else
            {
                return mid;
            }
            mid = (front+end)/2;
        }
        return -1;
    }     
};