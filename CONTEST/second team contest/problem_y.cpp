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
#define sp(x) std::cout << std::fixed << std::setprecision(x)
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
    FIO
        //fileOJ();
        int k,
        p, x;
    cin >> k >> p >> x;
    int m = 1;
    long double sum = (k * 1.00 / m) * p + (x * m);
    long double prev = sum;
    while (1)
    {
        m++;
        sum = (k * 1.00 / m) * p + (x * m);

        if (prev < sum)
            break;

        prev = sum;
    }
    sp(3) << prev << endl;
    return 0;
}