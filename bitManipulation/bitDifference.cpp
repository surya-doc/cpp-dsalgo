// You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

// Input: A = 10, B = 20
// Output: 4
// Explanation:
// A  = 01010
// B  = 10100
// As we can see, the bits of A that need
// to be flipped are 01010. If we flip
// these bits, we get 10100, which is B.

public:
// Function to find number of bits needed to be flipped to convert A to B
int countBitsFlip(int a, int b)
{

    // Your logic here
    int res = (a ^ b);
    int count = 0;
    while (res)
    {
        if (res & 1 == 1)
        {
            count++;
        }
        res >>= 1;
    }
    return count;
}