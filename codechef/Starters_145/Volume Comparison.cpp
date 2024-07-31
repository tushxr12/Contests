#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c, x;

    cin >> a >> b >> c >> x;

    if ((x * x * x) > (a * b * c))
    {
        cout << "CUBE";
    }
    else if ((x * x * x) < (a * b * c))
    {
        cout << "CUBOID";
    }
    else
    {
        cout << "EQUAL";
    }
}
