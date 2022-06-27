class Solution
{
public:
    int mySqrt(int x)
    {
        // we use binary search to find the ans x;
        // since the x maybe 1, we define the problem as [left,right]
        int left = 0;
        int right = x;
        int mid = (left + right) / 2;
        while (left <= right)
        {
            double square = (double)mid * (double)mid;
            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                left = mid + 1;
                mid = (left + right) / 2;
            }
            else
            {
                right = mid - 1;
                mid = (left + right) / 2;
            }
        }
        return mid;
    }
};