class Solution {
public:
    int search(vector<int>& nums, int target) {
        int front=0;
        int end = nums.size()-1;
        int mid = (front+end)/2 ;
        while(front <= end)
        {
            if(nums[mid] == target)
            {
                return mid;
            }
            else
            {
                if(target > nums[mid])
                {
                    front = mid+1; //remember that the mid index don't need to worry.
                }
                else
                {
                    end = mid-1;
                }
                mid = (front+end)/2;
            }
        }
        
        return -1;
    }
};