#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long
#define case1(z) cout << "Case " << z << ": "

ll decToBinary(ll n)
{

    ll count = 0;
    while (n > 0)
    {

        if (n % 2)
        {
            count++;
        }
        n = n / 2;
    }
    return count;
}
int main()
{
    FIO;
    ll a, b;
    int tc = 1;
    while (1)
    {
        cin >> a >> b;
        if (a == 0 & b == 0)
        {
            break;
        }
        ll count = 0;
        while (a <= b)
        {
            count += decToBinary(a);
            a++;
        }
        case1(tc) << count << endl;
        tc++;
    }

    return 0;
}