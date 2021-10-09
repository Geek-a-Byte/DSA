#include <bits/stdc++.h>

using namespace std;

#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define file_io \
    read;       \
    write
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define rtx return 0;

#define ll long long

#define line cout << "\n";
#define gap cout << " ";
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define casee cout << "Case " << t++ << ": "

#define sp(x) setprecision(x) << fixed
#define PI acos(-1.0)
#define eps 1e-12

#define sci(a) scanf("%d", &a);
#define sci2(a, b) scanf("%d %d", &a, &b);
#define scc(a) scanf("%ch", &a);
#define scc2(a, b) scanf("%ch %ch", &a, &b);
#define scd(a) scanf("%lf", &a);
#define scd2(a, b) scanf("%lf %lf", &a, &b);
#define scll(a) scanf("%lld", &a);
#define scll2(a, b) scanf("%lld %lld", &a, &b);

const int big = INT_MAX;
const int sml = INT_MIN;
const int mod = 100000007;
const int INT5 = 100005;
const int INT6 = 1000005;
const int INT7 = 10000005;
const int INT8 = 100000005;
const long long INT9 = 1000000005;
const long long INT12 = 1000000000005;

void fileoj()
{
#ifndef ONLINE_JUDGE
    file_io;
#endif
}

int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
#endif
    fileoj();

    int t = 1;
    while (true)
    {
        ll p;
        cin >> p;
        int c;
        cin >> c;

        if (p == 0 && c == 0)
            break;
        vector<ll> v;
        int z = 1;

        for (size_t i = 0; i < p; i++)
        {
            if (i == 1000)
                break;
            v.push_back(i + 1);
        }

        casee;
        cout << endl;
        for (size_t i = 0; i < c; i++)
        {

            char ch;
            cin >> ch;
            if (ch == 'E')
            {
                ll b;
                cin >> b;

                for (auto it : v)
                {
                    if (it == b)
                    {
                        v.erase(v.begin() + it);
                        break;
                    }
                }
                v.insert(v.begin(), b);
            }
            else
            {
                ll backup = v.front();
                cout << backup << endl;
                v.erase(v.begin());
                v.push_back(backup);
            }
        }
    }

#ifndef ONLINE_JUDGE
    printf("\nRun Time -> %.8fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    rtx;
}