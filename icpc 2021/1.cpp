#include <bits/stdc++.h>
using namespace std;
#define gcd(a, b) __gcd(a, b)
#define ll long long

#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
int main()
{
    int tc;
    cin >> tc;
    int i = 1;
    while (tc--)
    {
        ll a, b, m, cnt = 0;

        cin >> a >> b >> m;

        for (ll i = 0; i <= m; i++)
        {
            if (gcd(a + i, b + i) == 1)
            {
                cnt++;
            }
        }
        cout << "Case " << i << ": " << cnt << "\n";
        i++;
    }

    return 0;
}