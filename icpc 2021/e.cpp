#include <bits/stdc++.h>
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;

int main()
{
    FIO;
    int t;
    cin >> t;
    int index = 1;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        vector<int> v;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.emplace_back(x);
            //cout << sum << endl;
            if (v[i] >= 0)
            {
                sum += v[i];
            }
        }
        cout << "Case " << index << ": ";
        if (sum == 0)
        {

            sort(v.begin(), v.end());
            cout << v[v.size() - 1] << " 0"
                 << "\n";
        }
        else
        {

            int flag_pos = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] > 0 && flag_pos == 0)
                {
                    flag_pos = 1;
                    cnt++;
                }
                else if (v[i] < 0)
                {
                    flag_pos = 0;
                }
                //cout << "inner " << cnt << endl;
            }

            //printf("%lld %d\n", sum, cnt - 1);
            cout << sum << " " << cnt - 1 << "\n";
        }

        index++;
    }
}