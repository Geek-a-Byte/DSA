#include <bits/stdc++.h>
using namespace std;

int isDivisible(long long int n)
{
    if (n % 2 != 0)
    {
        return 1;
    }
    else
    {
        for (int i = n - 1; i > 1; i -= 2)
        {
            if (n % i == 0)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (isDivisible(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}