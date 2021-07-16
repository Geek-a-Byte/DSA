#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    FIO;
    //fileOJ();
    int tc;
    cin >> tc;
    int j = 1;
    while (tc--)
    {
        ll k;
        cin >> k;
        vector<ll> v;
        for (int i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        cout << "Case " << j << ": " << 1ll * v[0] * v[v.size() - 1] << endl;
        j++;
    }

    return 0;
}