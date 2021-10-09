#include <bits/stdc++.h>
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define sp(x) std::cout << std::fixed << std : : setprecision(x);
#define IO read write
#define PI acos(-1)
#define MP(x, y) make_pair(x, y)
#define CLR(p) memset(p, 0, sizeof(p))
#define ff first
#define ss second
#define PII pair<int, int>
#define mx 10000000
#define endl "\n"

void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;
int main()
{
    FIO
    fileOJ();

    int n;
    cin >> n;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int val;
        cin >> val;
        int l = 1;
        int r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == val)
            {
                l = r = mid;
            }
            else if (arr[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (arr[l] == val)
            cout << l << endl;
        else
            cout << "-1\n";
    }

    return 0;
}