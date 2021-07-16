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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //fileOJ(); //fileOJ caused time limit :)
    map<string, long long int> mp;
    long long q;
    cin >> q;
    while (q--)
    {
        int ch;
        string key;
        cin >> ch >> key;
        if (ch == 0)
        {

            long long int val;
            cin >> val;

            mp[key] = val;
        }
        if (ch == 1)
        {

            if (mp.count(key) == 1)
            {
                cout << mp[key] << endl;
            }
            else
            {
                cout << "0\n";
            }
        }
        if (ch == 2)
        {
            mp.erase(key);
        }
        if (ch == 3)
        {
            string R;
            cin >> R;

            auto it = mp.lower_bound(key);
            auto it2 = mp.upper_bound(R);
            for (auto itr = it; itr != it2; itr++)
            {
                cout << (*itr).first << " " << (*itr).second << endl;
            }
        }
    }

    return 0;
}