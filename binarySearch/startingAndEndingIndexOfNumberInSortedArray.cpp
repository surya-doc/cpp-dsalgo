// Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int strt = 0;
        int end = nums.size();
        vector<int> ans;
        while (strt < end)
        {
            int mid = (strt + end) / 2;
            if (nums[mid] >= target)
            {
                end = mid;
            }
            else
            {
                strt = mid + 1;
            }
        }
        int l = strt;
        strt = 0, end = nums.size();
        while (strt < end)
        {
            int mid = (strt + end) / 2;
            if (nums[mid] <= target)
            {
                strt = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        int r = strt;
        if (l == r)
        {
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else
        {
            ans.push_back(l);
            ans.push_back(r - 1);
        }
        return ans;
    }
};