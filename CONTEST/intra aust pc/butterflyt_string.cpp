#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = 0;
    if (n % 2 == 0)
    {
        cout << "NO";
    }
    else if (s == "0")
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < n / 2 - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = 1;
            }
        }
        for (int i = n / 2 + 1; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = 1;
            }
        }
        if (s[n / 2 - 1] != s[n / 2 + 1])
        {
            flag = 1;
        }
        if (s[n / 2] != '0')
        {
            flag = 1;
        }
        if (flag == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    return 0;
}