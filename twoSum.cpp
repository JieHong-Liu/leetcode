#include <vector>
using namespace std;
class Solution
{
public:
    vector<int>twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        ans.resize(2);
        bool fin=false;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1 ; j < nums.size(); j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    ans[0] = i;
                    ans[1] = j;
                    fin = true;
                    break;
                }
            }
            if(fin)
            {
                break;
            }
        }
    return ans;
    }
};
