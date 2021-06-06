// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

// Input: n = 1
// Output: true
// Explanation: 20 = 1

// 4 = 2^2
// 4 = 100 = n
// n-1 = 3 = 011

// n & n-1 = (100) & (011) = 000

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        unsigned int ans = (n - 1) & n;
        bool val;
        (ans == 0) ? (val = true) : (val = false);
        return val;
    }
};