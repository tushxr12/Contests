#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (y - x == z - y)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
        cout << "\n";
    }
}
