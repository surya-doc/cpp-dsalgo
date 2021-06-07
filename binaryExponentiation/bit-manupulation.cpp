#include <iostream>
#include <cmath>
using namespace std;

// long long exp(long long num, long long n)
// {
//     long long ans = 1;
//     while (n)
//     {
//         if (n % 2 != 0)
//         {
//             ans = (ans * num);
//         }
//         n = n / 2;
//         num = (num * num);
//     }
//     return ans;
// }

long long exp1(long long num, long long n, long long p)
{
    long long ans = 1;
    while (n)
    {
        if (n % 2 != 0)
        {
            ans = (ans * num) % p;
        }
        n = n / 2;
        num = (num * num) % p;
    }
    return ans;
}

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        long long N, M;
        cin >> N >> M;
        long long mod = 1000000007;
        long long col = exp1(2, N, mod) - 1;
        long long row = exp1(col, M, mod);
        long long ans = row % mod;
        cout << ans << endl;
    }
    return 0;
}
