#include <bits/stdc++.h>
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define sp(x) std::cout << std::fixed << std : : setprecision(x);
#define IO read write
#define ll long long
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;

multiset<ll> s;
int main()
{
    FIO
    fileOJ();

    int n;
    ll k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        s.insert(val);
    }
    ll last;

    while (k--)
    {

        int i = 0;
        for (auto it : s)
        {
            if (i == s.size() / 2)
            {
                ++it;
                s.insert(it);
                last = it;
                break;
            }

            i++;
        }
    }

    cout << last << endl;
    return 0;
}