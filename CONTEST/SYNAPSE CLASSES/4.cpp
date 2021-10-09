#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = n;
        int k = 3;

        for (int i = 0; i < n; i++)
        {
            map<int, int> mp;
            for (int j = i; j < n; j = j + k)
            {
                mp[a[j]++];
            }
            int flag = 0;
            for (auto it : mp)
            {
                if (it.second % 2 == 1 && flag == 0)
                {
                    flag = 1;
                }
                else if (it.second % 2 == 1 && flag == 1)
                {
                }
            }
        }
    }
}