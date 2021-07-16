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
        int cnt = 0;
        int final_flag = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int start_index = -1;
        int end_index = n - 1;
        int flag_pos;
        int flag_neg;
        while (1)
        {
            flag_pos = 0;
            flag_neg = 0;
            int tmp = start_index;
            for (int i = start_index + 1; i < n; i++)
            {
                if (v[i] >= 0)
                {
                    start_index = i;
                    //cout<<"strt"<<start_index<<endl;
                    flag_pos = 1;
                    break;
                }
            }
            for (int i = end_index; i > tmp; i--)
            {
                if (v[i] < 0)
                {
                    end_index = i;
                    //cout<<"end"<<end_index<<endl;
                    flag_neg = 1;
                    break;
                }
            }
            if (flag_pos == 0)
            {
                sort(v.begin(), v.end());
                cout << "Case " << index << ": " << v[v.size() - 1] << " 0" << endl;
                break;
            }
            else if (flag_pos == 1 && flag_neg == 1)
            {
                reverse(v.begin() + start_index, v.begin() + end_index + 1);
                cnt++;
            }
            else if (flag_neg == 0)
            {
                int sum = 0;
                for (int j = start_index; j < n; j++)
                {
                    sum = sum + v[j];
                }
                cout << "Case " << index << ": " << sum << " " << cnt << endl;
                final_flag = 1;
                break;
            }
        }

        index++;
    }
}