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
#define mx 10000000
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}
using namespace std;
unsigned long long int factor(unsigned long long int n)
{
    unsigned long long int sum = 0;
    for (unsigned long long int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i * i != n)
            {
                sum += (n / i);
            }
        }
    }
    return sum;
}
unsigned long long int primefactor(unsigned long long int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    unsigned long long int sum1 = 0, sum2 = 0;
    for (unsigned long long int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (unsigned long long int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
                sum1 += factor(i);
            }
        }
    }
    long long int c = 0;
    for (unsigned long long int p = 2; p <= n; p++)
    {
        if (prime[p])
        {
            c++;

            sum2 += p;
        }
    }

    sum2 += c;
    return sum1 + sum2;
}

int main()
{
    FIO
    fileOJ();
    unsigned long long int a, b;
    unsigned long long sum = 0;
    cin >> a >> b;
    for (unsigned long long int i = a; i <= b; i++)
    {
        unsigned long long int s = primefactor(i);
        sum = sum + s;
    }
    cout << sum;
}