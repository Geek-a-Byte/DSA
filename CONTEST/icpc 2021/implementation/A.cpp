#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define endl "\n"
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)

#define IO read write

void fileOJ(){
#ifndef ONLINE_JUDGE
    IO
#endif
} map<char,
      pair<int, int>> vis;

int main()
{
    fileOJ();
    int n;
    TC
    {
        cin >> n;
        cout << n;
        int flag = 1;
        vis.clear();
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            cout << x;
            if (vis[x].first == 0)
            {
                vis[x].first = 1;
                vis[x].second = i;
            }
            else if (vis[x].first == 1 and (vis[x].second) != i - 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}