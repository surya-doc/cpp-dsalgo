// Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32. Find the set bits of y in range [l, r] and set these bits in x also.

// Input:
// X = 44, Y = 3
// L = 1,  R = 5
// Output: 47
// Explaination: presenation of 44 and 3 are
// 101100 and 11. So in the range 1 to 5 there
// are two set bits. If those are set in 44
// it will become 101111 = 47.

public:
int setSetBit(int x, int y, int l, int r)
{
    // code here
    int temp = y;
    int count = 0;
    int a = x;
    for (int i = l; i <= r; i++)
    {
        if (y & (1 << (i - 1)))
        {
            a |= (1 << (i - 1)); //to change the bit in x if it is 0 then change to 1
        }
    }
    return a;
}