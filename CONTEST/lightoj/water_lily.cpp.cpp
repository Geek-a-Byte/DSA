#include <bits/stdc++.h>

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define TC  int tc; cin >> tc; for (int cn = 1; cn <= tc; ++cn)
#define read freopen("inputf.in", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define setprecision(x) std::cout << std::fixed << std::setprecision(x) 
#define IO read write
#define PI acos(-1)
#define MP(x, y) make_pair(x, y)
#define CLR(p) memset(p, 0, sizeof(p))
#define ff first
#define ss second
#define PII pair<int, int>

void fileOJ()
{
#ifndef ONLINE_JUDGE
	IO
#endif
}
using namespace std;

int main()
{
	FIO
	fileOJ();
    double h, l; //double nite hobe naile hobe na
    cin >> h >> l;
    double ans = (l * l - h * h) / (2 * h);
    setprecision(13)<<ans;
	return 0;
}
