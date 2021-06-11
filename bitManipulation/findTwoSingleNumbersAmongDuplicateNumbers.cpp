// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers.

// Input:
// N = 2
// arr[] = {1, 2, 3, 2, 1, 4}
// Output:
// 3 4

// ****************
// XOR of a number with same number gives 0

// XOR of a number with o gives same number

// ****************

// As XOR of two same number = 0 so,
// 1^2^3^2^1^4 = 3^4

// Now we have to divide array elements with respect to right most d=set bit of 3^4

// Then we will get {1, 3, 1}
// Agin do XOR with thos we get 4^3^1^3^1 = 4
// One number found And another one = 3^4^4 = 3

vector<int> singleNumber(vector<int> nums)
{
    // Code here.
    int X = 0;
    vector<int> ans;
    // ans.push_back(1);
    // ans.push_back(2);
    for (int i = 0; i < nums.size(); i++)
    {
        X = X ^ nums[i];
    }
    int temp = X;
    int place = 0;
    while (temp)
    {
        if (temp & 1 == 1)
        {
            break;
        }
        place++;
        temp >>= 1;
    }
    int left = X;
    int right = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int new_num = (nums[i] >> place);
        if (new_num & 1 == 1)
        {
            left = left ^ nums[i];
        }
    }
    int num_1 = left;
    int num_2 = (X ^ left);
    if (num_2 > num_1)
    {
        ans.push_back(num_1);
        ans.push_back(num_2);
    }
    else
    {
        ans.push_back(num_2);
        ans.push_back(num_1);
    }
    return ans;
}