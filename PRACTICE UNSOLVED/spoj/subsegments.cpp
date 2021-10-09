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
    FIO
    fileOJ();
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<long long int, greater<long long int>> s;

    for (int i = 0; i < n; i++)
    {
        if (i + k - 1 == n)
            break;
        s.clear();

        for (int j = i; j <= i + k - 1; j++)
        {
            if (s.find(a[j]) == s.end())
                s.insert(a[j]);
            else
                s.erase(a[j]);
        }

        if (s.size() > 0)
        {
            auto it = s.begin();
            cout << *it << "\n";
        }
        if (s.size() == 0)
        {
            cout << "Nothing\n";
        }
    }
    return 0;
}