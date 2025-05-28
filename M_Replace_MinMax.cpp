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

    int mn = a[0];
    int mnidx = 0;

    int mx = a[0];
    int mxidx = 0;

    for (int i = 0; i < n; i++)
    {
        if (mn > a[i])
        {
            mn = a[i];
            mnidx = i;
        }
        if (mx < a[i])
        {
            mx = a[i];
            mxidx = i;
        }
    }
    swap(a[mnidx], a[mxidx]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}