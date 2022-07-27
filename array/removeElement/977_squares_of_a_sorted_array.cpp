class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {

// first version algorithm with time complexity O(n^2) and space complexity O(1)
#if 0
            for(int i = 0; i < nums.size(); i++)
            {   
                nums[i] = nums[i]*nums[i];
            }
            sort(nums.begin(), nums.end());
            return nums;
#endif
        // second version (follow up) algorithm with time complexity O(n) and space complexity O(n)
        // using two pointer to sort the array.
        // since the biggest value will always exist in the both sides
        // so we only need to compare the left most and right most.
        int left = 0;
        int right = nums.size() - 1;
        int index = 0;
        vector<int> ans(nums.size());

        while (left <= right)
        {
            int l_value = nums[left] * nums[left];
            int r_value = nums[right] * nums[right];
            if (l_value > r_value)
            {
                ans[index] = (l_value);
                left++;
                index++;
            }
            else
            {
                ans[index] = (r_value);
                right--;
                index++;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};