
#include <bits/stdc++.h>

using namespace std;

#define mx 10000007
#define ll long long

bitset<mx> b;
vector<ll> v;
void seive()
{
    b.set();
    b[0] = b[1] = false;
    for (ll i = 0; i < mx; i++)
    {
        if (b[i])
        {
            v.push_back(i);
            for (ll j = i * i; j <= mx; j += i)
                b[j] = false;
        }
    }
}

int main()
{
    int t;
    seive();
    cin >> t;
    while (t--)
    {
        long long n, res = 1ll, f;
        cin >> n;
        f = n;
        for (ll i = 0; i < v.size() && (v[i] * v[i]) <= n; i++)
        {
            if (n % v[i] == 0)
            {
                cout << v[i] << " ";
                int cnt = 0;
                while (n % v[i] == 0)
                {
                    cnt++;
                    n /= v[i];
                }
                cnt++;
                res = 1ll * res * ((round(pow(v[i], cnt + 1)) - 1) / (v[i] - 1));
            }
        }
        cout << endl;
        cout << res - f << endl;
    }
    return 0;
}