#include <iostream>

using namespace std;

bool isBeautiful(int n)
{
    for (int i = 1; i < n; i++)
    {
        int sum = i;
        for (int j = i + 1; sum <= n; j++)
        {
            sum += j;
            if (sum == n)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    //.freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int cnt = 0;
    for (int i = 5; i <= 100; i++)
    {
        if (isBeautiful(i))
        {
            cnt++;
            cout << i << endl;
        }
    }
    cout << cnt << endl;
}