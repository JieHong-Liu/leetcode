class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int slow = 0;
        // just move all zeros to the end of the array.
        for (int fast = 0; fast < nums.size(); fast++)
        {
            if (nums[fast] != 0)
            {
                swap(nums[fast], nums[slow]);
                slow++;
            }
        }
    }
};