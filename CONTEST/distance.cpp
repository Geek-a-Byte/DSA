#include <bits/stdc++.h>
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define TC     \
    int tc;    \
    cin >> tc; \
    for (int cn = 1; cn <= tc; ++cn)
#define read freopen("input.txt", "r", stdin);
#define write freopen("output.txt", "w", stdout);
#define sp(x) std::cout << std::fixed << std ::setprecision(x)
#define IO read write
#define PI acos(-1)
#define MP(x, y) make_pair(x, y)
#define CLR(p) memset(p, 0, sizeof(p))
#define ff first
#define ss second
#define PII pair<int, int>
#define mx 10000000
void fileOJ()
{
#ifndef ONLINE_JUDGE
    IO
#endif
}

using namespace std;

class Point
{
    float x1, y1;

public:
    void setX(float a)
    {
        x1 = a;
    }
    void setY(float b)
    {
        y1 = b;
    }
    void dist(float x2, float y2)
    {
        float X = (x1 - x2) * (x1 - x2);
        float Y = (y1 - y2) * (y1 - y2);
        float d = sqrt(X + Y);
        sp(4) << d << endl;
        //sp(4) << "\n";
    }
};

int main()
{
    FIO
    fileOJ();
    float x1, y1, x2, y2;
    TC
    {
        cin >> x1 >> y1 >> x2 >> y2;
        Point p; //creating objects of a class means creating a physical entity for that class.so creating object occupies memory
        p.setX(x1);
        p.setY(y1);
        cout << "Case " << cn << ": ";
        p.dist(x2, y2);
    }
    return 0;
}