class Solution
{
public:
    bool checkTwoChessboards(string c1, string c2)
    {
        int val1 = (c1[0] - 'a') + (c1[1] - '0');
        int val2 = (c2[0] - 'a') + (c2[1] - '0');
        return (val1 % 2 == val2 % 2);
    }
};