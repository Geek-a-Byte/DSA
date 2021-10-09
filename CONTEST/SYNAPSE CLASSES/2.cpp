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
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;
int main()
{
    //FIO
    //fileOJ();

    freopen("overcode.in", "r", stdin);
    TC
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n < 6)
        {
            cout << "0\n";
        }
        else
        {

            sort(v.begin(), v.end());
            int count = 0;
            for (int i = 0; i <= n - 6;)
            {
                if (abs(v[i] - v[i + 5]) <= 1000)
                {
                    count++;

                    i += 6;
                }

                else
                {

                    i++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}