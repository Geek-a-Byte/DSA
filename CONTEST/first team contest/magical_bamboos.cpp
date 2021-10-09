#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define PI acos(-1)
#define rep(i, k, n) for (int i = k; i < n; i++)
#define MP(x, y) make_pair(x, y)
#define PB(x) push_back(x)
#define All(p) p.begin(), p.end()
#define CLR(p) memset(p, 0, sizeof(p))
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define PII pair<int, int>

using namespace std;

int main()
{
    //for faster i/o
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //for file input output
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (even == n || odd == n)
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
    return 0;
}