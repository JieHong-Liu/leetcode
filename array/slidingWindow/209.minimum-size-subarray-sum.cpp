/*
 * @lc app=leetcode id=209 lang=cpp
 *4
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int start = 0;
        int sum = 0;
        int result = INT32_MAX; // means the number of min sub array length.
        for(int end = 0 ; end < nums.size() ; end++)
        {
            sum = sum + nums[end]; // add every single element to the sum.
            while(sum >= target)
            {
                int tmpResult = end - start + 1;
                sum = sum - nums[start];
                start++;
                if(tmpResult < result)
                {
                    result = tmpResult;
                }
            }
        }
        if(result == INT32_MAX) // if the result isnt changed.
        {
            return 0; // mean there is no ans.
        }
        else 
        {
            return result;
        }
    }
};
// @lc code=end
