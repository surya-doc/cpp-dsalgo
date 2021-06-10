// Given two integers a and b, return the sum of the two integers without using the operators + and -.

// The XOR operation will give the addition
// The AND operation will give the carry
// The LEFT_SHIFT operator will shift the carry for addition

// Example:
// 1+3 = 4
// a = 0001
// b = 0011

// a = 0010 as a^b
// b = 0010 as (a&b)<<1

// a = 0000 as a^b
// b = 0100 as (a&b)<<1

// a = 0100 as a^b
// b = 0000 as (a&b)<<1
// now the b = 0 so return a

class Solution
{
public:
    int getSum(int a, int b)
    {
        if (b == 0)
        {
            return a;
        }
        return getSum(a ^ b, (a & b) << 1);
    }
};