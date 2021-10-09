#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inp;
    cin >> inp;
    int v_count = 0;
    for (int i = 0; i < inp.length(); i++)
    {
        if (inp[i] == 'a' or inp[i] == 'o' or inp[i] == 'i' or inp[i] == 'o' or inp[i] == 'u')
        {
            v_count++;
        }
    }
    if (v_count > 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}