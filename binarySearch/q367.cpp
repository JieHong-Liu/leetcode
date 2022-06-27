class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        // we use the binary search to find the ans is perfect square or not...
        // this problem is similar to the problem Q69
        // since the x maybe 1, we define the problem as [left,right]
        int left = 0;
        int right = num;
        int mid = (left + right) / 2;
        while (left <= right)
        {
            double square = (double)mid * (double)mid;
            if (square == num)
            {
                return true;
            }
            else if (square < num)
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
        return false;
    }
};