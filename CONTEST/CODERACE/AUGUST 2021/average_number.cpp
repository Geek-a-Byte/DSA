#include <bits/stdc++.h>
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
#define M 10000007
#define mod % M
using namespace std;
typedef long long ll;
const ll N = 1e6 + 10;
long long int dp[N];

long long int fn(long long int n)
{
    long long int &ret = dp[n];
    if (n == 1)
    {
        return 1;
    }
    if (ret != -1)
    {
        return ret;
    }
    else
    {
        ret = (3 * n * n / 2) - (n / 2) + fn(n - 1);
        return ret;
    }
}

int main()
{
    long long int n, p;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (long long int i = 0; i < n; i++)
    {
        cin >> p;
        long long int res = fn(p);
        cout << (res / p) << endl;
    }

    return 0;
}