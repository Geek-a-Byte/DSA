//wrong ans at last case
#include <bits/stdc++.h>
using namespace std;
#define TC                     \
    unsigned long long int tc; \
    cin >> tc;                 \
    for (unsigned long long int cn = 1; cn <= tc; ++cn)

int main()
{

    TC
    {
        unsigned long long int p, q;
        cin >> p >> q;
        cout << "Case #" << cn << ": ";
        if (p <= q)
        {
            cout << "Klee\n";
        }
        else if (p % 2 == 1 and q == 1)
        {
            cout << "Klee\n";
        }
        else if (p % 2 == 0 and q == 1)
        {
            cout << "Jean\n";
        }
        else if ((p / q) % 2 == 1 and p % 2 == 1 and p % q == 0)
        {
            cout << "Klee\n";
        }
        else if ((p / q) % 2 == 1 and p % 2 == 1 and p % q < q)
        {
            cout << "Jean\n";
        }
        else if ((p / q) % 2 == 0 and p % 2 == 1)
        {
            cout << "Klee\n";
        }
        else if ((p / q) % 2 == 0 and p % 2 == 0)
        {
            cout << "Jean\n";
        }
        else if ((p / q) % 2 == 1 and p % 2 == 0)
        {
            cout << "Jean\n";
        }
    }
    return 0;
}