#include <bits/stdc++.h>
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)
#define read freopen("tabs.in", "r", stdin);
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
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;
int main()
{

    freopen("tabs.in", "r", stdin);
    //fileOJ();
    TC
    {
        int n, k;
        cin >> n >> k;
        if (n == 1 && k == 1)
        {
            cout << "0\n";
        }
        else if ((k == 1 || k == n) && n != 1)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
    return 0;
}