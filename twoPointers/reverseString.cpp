// Reverse String

// Write a function that reverses a string. The input string is given as an array of characters s.

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int j = s.size() - 1;
        for (int i = 0; i < (s.size()) / 2; i++)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            j--;
        }
    }
};