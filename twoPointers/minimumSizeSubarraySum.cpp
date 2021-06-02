// Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int sum = 0;
        int count = INT_MAX;
        int prev = 0;
        int now = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            cout << i;
            if (sum >= target)
            {
                while (sum >= target)
                {
                    if ((now - prev) < count)
                    {
                        count = (now - prev);
                    }
                    sum -= nums[prev++];
                    cout << sum << " ";
                }
            }
            if (i < nums.size())
            {
                sum += nums[i];
                now = i;
            }
            cout << sum << " ";
        }
        cout << "Count = " << count;
        if (count == INT_MAX)
        {
            return 0;
        }
        else
        {
            return count + 1;
        }
    }
};