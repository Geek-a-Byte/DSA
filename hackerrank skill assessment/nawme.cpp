#include <bits/stdc++.h>
using namespace std;

long long int dp[10005];

void init()
{
    for (int i = 0; i <= 10005; i++)
    {
        dp[i] = -1;
    }
}

int cnt = 0;
int a, b, c, d, e, f;
int fn(int n)
{
    if (dp[n] == -1)
    {
        //cnt++;
        //cout<<cnt<<endl;
        if (n == 0)
            dp[0] = a % 10000007;
        else if (n == 1)
            dp[1] = b % 10000007;
        else if (n == 2)
            dp[2] = c % 10000007;
        else if (n == 3)
            dp[3] = d % 10000007;
        else if (n == 4)
            dp[4] = e % 10000007;
        else if (n == 5)
            dp[5] = f % 10000007;
        else
            dp[n] = (fn(n - 1) + fn(n - 2) + fn(n - 3) + fn(n - 4) + fn(n - 5) + fn(n - 6)) % 10000007;
    }
    // cout << "Temp:" << n << " " << dp[n] << endl;
    return dp[n];
}

int main()
{

    int n, cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        init();
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, fn(n) % 10000007);
    }
    return 0;
}