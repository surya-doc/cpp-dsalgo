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
        // vector<int>num;
        // for(int i=0; i<=n; i++){
        //     int temp = i;
        //     int count = 0;
        //     while(temp){
        //         if(temp%2 != 0){
        //             count++;
        //         }
        //         temp = temp >> 1;
        //     }
        //     num.push_back(count);
        // }
        // return num;
    }
};