// You may recall that an array arr is a mountain array if and only if:

// arr.length >= 3
// There exists some index i (0-indexed) with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given an integer array arr, return the length of the longest subarray, which is a mountain. Return 0 if there is no mountain subarray.

// Input: arr = [2,1,4,7,3,2,5]
// Output: 5
// Explanation: The largest mountain is [1,4,7,3,2] which has length 5.

class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {
        int length = 0;
        int strt = -1;
        int end = -1;
        int n = arr.size();
        if (n < 3)
        {
            return 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                if (end != -1)
                {
                    strt = -1;
                    end = -1;
                }

                if (strt == -1)
                {
                    strt = i;
                }
            }
            else
            {
                if (arr[i + 1] < arr[i])
                {
                    if (strt != -1)
                    {
                        end = i + 1;
                    }
                    if (strt != -1 && end != -1)
                    {
                        if (length < end - strt + 1)
                        {
                            length = end - strt + 1;
                        }
                    }
                }
                else
                {
                    strt = -1;
                    end = -1;
                }
            }
        }
        if (strt != -1 && end != -1)
        {
            if (length < end - strt + 1)
            {
                length = end - strt + 1;
            }
        }
        cout << strt << end;
        return length;
    }
};