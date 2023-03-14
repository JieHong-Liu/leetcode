/*
 * @lc app=leetcode id=904 lang=cpp
 *
 * [904] Fruit Into Baskets
 */

// @lc code=start
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
            int left = 0 ;
            int currentFruits = 0;
            int result = 0 ;
            unordered_map<int, int> basket;
            for (int right = 0 ; right < fruits.size(); right++)
            {
                if(basket.count(right) == 0)
                {
                    basket.insert(fruits[right],1);
                }
                else // already in basket
                {
                    basket[fruits[right]]++;
                }
            }
        }
        return result;
    }
};
// @lc code=end

