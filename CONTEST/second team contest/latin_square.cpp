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
int main()
{
    FIO
    fileOJ();
    int n;

    while (cin >> n)
    {

        map<char, int> mp;
        vector<char> s;

        char arr[n][n];
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (i == 0)
                {
                    s.push_back(arr[i][j]);
                }
            }
        }

        sort(s.begin(), s.end());
        // for (auto it : s)
        // {
        //     cout << it << " ";
        // }
        // cout << endl;
        set<char> s1;
        set<char> s2;
        int flg = 1;
        for (int i = 0; i < n; i++)
        {
            s1.clear();
            for (int j = 0; j < n; j++)
            {
                s1.insert(arr[i][j]);
            }
            if (s1.size() < n)
            {
                flg = 0;
                break;
            }
        }
        for (int j = 0; j < n; j++)
        {
            s2.clear();
            for (int i = 0; i < n; i++)
            {
                s2.insert(arr[i][j]);
            }
            if (s2.size() < n)
            {
                flg = 0;
                break;
            }
        }

        if (flg == 0)
        {
            cout << "No\n";
        }
        else
        {
            int flag2 = 0;

            for (int j = 0; j < n; j++)
            {
                if (s[j] != arr[0][j])
                {
                    flag2 = 1;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {

                if (s[i] != arr[i][0])
                {
                    flag2 = 1;
                    break;
                }
            }

            if (flag2 == 0)
            {
                cout << "Reduced\n";
            }
            else
            {
                cout << "Not Reduced\n";
            }
        }
    }
    return 0;
}