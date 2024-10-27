int shortestPath(int n, string &s)
{
    int ans = INT_MAX;

    int rInd = -1, bInd = -1, gInd = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            rInd = i;
        else if (s[i] == 'G')
            gInd = i;
        else
            bInd = i;

        int mini = min({rInd, bInd, gInd});
        if (mini >= 0)
            ans = min(ans, i - mini);
    }

    if (ans == INT_MAX)
        return -1;
    return ans;
}
