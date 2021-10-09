#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll low, high;

        low = ceil(log2(a));
        high = ceil(log2(b));

        cout << (b - a + 1) - (high - low) << endl;
    }
}