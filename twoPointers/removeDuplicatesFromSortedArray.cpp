// Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4]
// Explanation: Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively. It doesn't matter what values are set beyond the returned length.

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int index = 0;
        if (nums.size() == 0)
        {
            return NULL;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            // cout << nums[index] << nums[i] << endl;
            if (nums[index] != nums[i])
            {
                nums[++index] = nums[i];
            }
            cout << index << " ";
        }
        return index + 1;
    }
};