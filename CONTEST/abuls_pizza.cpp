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
#define sp(x) std::cout << std::fixed << std ::setprecision(x)
#define IO read write
#define PI acos(-1)
#define MP(x, y) make_pair(x, y)
#define CLR(p) memset(p, 0, sizeof(p))
#define ff first
#define ss second
#define PII pair<int, int>
#define mx 10000000
#define ll long long
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;
int main()
{
    int n;

    while (cin >> n)
    {
        ll sum = 0;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
        }
        cout << sum << endl;
    }
    return 0;
}