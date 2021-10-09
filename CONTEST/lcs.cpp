#include <bits/stdc++.h>
using namespace std;

int lcs(int a, int b)
{
    int max = a > b ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int l1, l2;
        l1 = a.size();
        l2 = b.size();
        int n_l = lcs(l1, l2);
        char str[40], str2[40];
        int c = n_l;
        int i = 0;
        int j;
        while (c != 1)
        {
            j = 0;
            for (j = 0; j < l1; j++)
            {
                str[i] = a[j];
                i++;
            }
            c = c / l1;
        }
        for (int k = 0; k < i; k++)
        {
            cout << str[k];
        }
        cout << endl;
    }
}