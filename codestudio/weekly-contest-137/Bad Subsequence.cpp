int doesThereExist(int n, int k, string &s)
{
    // Write your code here.
    string ss = s;
    sort(ss.begin(), ss.end());
    if (ss[0] == ss[n - 1])
    {
        return 0;
    }

    // it should not be sorted in increasing order
    // abcde
    // aabcc
    // bac

    if (k == 1)
        return 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j]) // left char > right char
            {
                return 1;
            }
        }
    }

    return 0;
}