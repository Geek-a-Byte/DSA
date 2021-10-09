#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        int flag = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'M' || s[i] == 'O' || s[i] == 'T' || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y')
            {
                if (s[i] != s[len - i - 1])
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}