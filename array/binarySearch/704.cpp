class Solution {
public:
// define the problem in [front,end].
// since all the integers are unique, we can apply binary search
    int search(vector<int>& nums, int target) {
        int front=0;
        int end = nums.size()-1;
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