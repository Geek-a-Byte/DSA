#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, flag = 0;
        cin >> n >> b;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > b)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "YES\n";
        }
        else
        {
            sort(a, a + n);
            if (a[0] + a[1] <= b)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}