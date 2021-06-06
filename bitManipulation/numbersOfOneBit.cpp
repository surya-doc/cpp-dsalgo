// Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).

// Input: n = 00000000000000000000000000001011
// Output: 3
// Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

// 1011 = 11
// 0101 = 5 = 11/2
// 0010 = 2 = 5/2
// 0001 = 1 = 2/2

// that means we have to count the least significant bit untill number becomes to zero

// for every even number the LSB is always 0 and for every odd number LSB is always 1

// so we can right shifting the number by 1 every time and check if it is odd or even if odd add 1 else continue

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
        {
            if (n % 2 != 0)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};