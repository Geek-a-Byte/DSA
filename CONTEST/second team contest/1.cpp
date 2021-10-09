#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 0;
    int num = n + 1;
    n = n + 1;
    while (n > 0)
    {
        m = n % 10;
        if (m == 0)
        {
            num++;
            n = num;
            continue;
        }
        n = n / 10;
    }
    cout << num << endl;
}
