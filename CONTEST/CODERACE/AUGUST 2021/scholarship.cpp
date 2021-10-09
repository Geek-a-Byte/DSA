#include <bits/stdc++.h>
using namespace std;
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);

int main()
{
    long double n, m;
    vector<long double> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    cin >> m;
    float count = v.size();
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < m)
        {
            count--;
        }
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(2) << m / count;

    return 0;
}