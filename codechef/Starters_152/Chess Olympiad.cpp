#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;

    if (x + y + z == 4)
    {
        if (x == z)
        {
            cout << "NO";
            return 0;
        }
        if (x >= y && x >= z)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        int rem = 4 - (x + y + z);
        if (rem >= y && rem >= z)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}
