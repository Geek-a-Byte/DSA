#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("outputf.in", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int sum = 0;
        vector<int> v;
        while (sum < n)
        {
            int i = 1;
            sum = a * i * i + b * i;
            while (sum < n && sum > 0)
            {

                v.push_back(sum % 10);

                sum = sum / 10;
            }
            i++;
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
