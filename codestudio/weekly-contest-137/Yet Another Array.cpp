int findMinimumMoves(int n, vector<int> a, vector<int> &b)
{

    // Write your code here.
    int ans1 = 0, ans2 = 0, diff1 = 0, diff2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            diff1++;
        }
    }

    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            diff2++;
        }
    }

    return min(diff1, diff2 + 1);
}