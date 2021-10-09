#include <bits/stdc++.h>

#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define sp(x) std::cout << std::fixed << std : : setprecision(x);
#define IO read write

void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;
int main()
{
    //commenting out fio gave me ac!!!
    fileOJ();
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int hr;
        int min;
        int a, b, c, d;

        scanf("%d:%d", &hr, &min);
        //cout << hr << " " << min << endl;
        a = 60 * hr + min;

        scanf("%d:%d", &hr, &min);
        //cout << hr << " " << min << endl;
        b = 60 * hr + min;

        scanf("%d:%d", &hr, &min);
        //cout << hr << " " << min << endl;
        c = 60 * hr + min;

        scanf("%d:%d", &hr, &min);
        //cout << hr << " " << min << endl;
        d = 60 * hr + min;

        //cout << a << b << c << d << endl;
        if (c > b or d < a)
        {
            cout << "Case " << i + 1 << ": "
                 << "Hits Meeting\n";
        }
        else
        {
            cout << "Case " << i + 1 << ": "
                 << "Mrs Meeting\n";
        }
    }
    return 0;
}