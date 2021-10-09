#include <bits/stdc++.h>
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define IO read write
using namespace std;
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}
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
int main()
{
    fileOJ();
    unsigned long long int a, b;
    unsigned long long sum = 0;
    cin >> a >> b;
    for (unsigned long long int i = a; i <= b; i++)
    {
        unsigned long long int s = factor(i);
        sum = sum + s;
    }
    cout << sum;
}