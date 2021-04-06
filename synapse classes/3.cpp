#include <bits/stdc++.h>
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define TC            \
    long long int tc; \
    cin >> tc;        \
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

bool solved[13];
map<char, int> solve;

int main()
{
    //FIO
    //fileOJ();
    freopen("scoreboard.in", "r", stdin);
    TC
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            solved[x - 65] = 1;
        }
        int max = 0;
        char index;
        for (int i = 0; i < 13; i++)
        {
            int k;

            cin >> k;
            if (max < k && solved[i] != 1)
            {
                max = k;
                index = i + 65;
            }
        }
        cout << index << endl;
        for (int i = 0; i < 13; i++)
        {
            solved[i] = 0;
        }
        solve.clear();
    }
    return 0;
}