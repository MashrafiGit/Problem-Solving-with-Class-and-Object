#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }

    int fre = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            fre++;
        }
    }

    fre % 2 == 1 ? cout << "Lucky" : cout << "Unlucky";

    return 0;
}