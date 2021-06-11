// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

class Solution
{
public:
    vector<int> countBits(int n)
    {
        // map<int, int>store;
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            int num = i;
            int count = 0;
            if (i == 0)
            {
                ans.push_back(0);
                // store.insert({0, 0});
            }
            else if (i == 1)
            {
                ans.push_back(1);
                // store.insert({1, 1});
            }

            else
            {
                if (i % 2 != 0)
                {
                    count++;
                }
                count += ans[num / 2];
                ans.push_back(count);
                // store.insert({num, count});
            }
        }
        return ans;
    }
};

// ********************************************************
// Optimised solution for <= 10^9
// See the image for technique better understanding

// You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

// Input: N = 4
// Output: 5
// Explanation:
// For numbers from 1 to 4.
// For 1: 0 0 1 = 1 set bits
// For 2: 0 1 0 = 1 set bits
// For 3: 0 1 1 = 2 set bits
// For 4: 1 0 0 = 1 set bits
// Therefore, the total set bits is 5.

public:
int mostPower(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return (x - 1);
}
int countSetBits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int x = mostPower(n);
    int before = x * (1 << (x - 1));
    int nextCount = n - (1 << x) + 1;
    int rest = n - (1 << x);
    int ans = before + nextCount + countSetBits(rest);
    return ans;
}