#include<bits/stdc++.h>
#define MAX ((int)2e9 + 5)
#define MAXL ((ll)1e16 + 5)
#define pi acos(-1)
#define MOD ((int)1e9 + 7)
#define N ((int)1e5 + 5)
#define err (1e-8)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
//#define int ll


using namespace std;



//fast io
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);


double calc(double x, double y , double d)
{
    double tmp = sqrt(x*x - d*d) , tmp1 = sqrt(y*y-d*d);
    double ans = tmp*tmp1/(tmp + tmp1);
    return ans;
}

int main()
{
//    problem link: https://lightoj.com/problem/crossed-ladders

    fastio;

    int t,caseno =  1;
    cin>>t;
    while(t--)
    {
        double x , y , c;
        cin>>x>>y>>c;
        int iter = 0;
        double L = 0 , R = min(x, y);
        while(iter < 100 && R - L > err){
            double mid = (L + R)/2;
            if(calc(x , y , mid) < c) R = mid;
            else L = mid;
        }
        cout<<setprecision(15)<<fixed;
        cout<<"Case "<<caseno++<<": "<<L<<"\n";

    }
    return 0;
}

