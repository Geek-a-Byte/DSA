#include<bits/stdc++.h>
#define MAX ((int)2e9 + 5)
#define MAXL ((ll)1e16 + 5)
#define pi acos(-1)
#define MOD ((int)1e9 + 7)
#define N ((int)1e5 + 5)
#define eps (1e-8)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
//#define int ll


using namespace std;



//fast io
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);


int arr[N];

int srch(int n, int b)
{
    int L = 0, R = n;
    while(L<R)
    {
        int mid = (L + R + 1)/2; /// mid = (L + R)/2
        if(arr[mid] <= b) L = mid;
        else R = mid - 1;
    }

    return L;
}

int main()
{
//    problem link: https://lightoj.com/problem/points-in-segments

    fastio;

    int t,caseno =  1;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        for(int i = 1 ; i<=n ; i++) cin>>arr[i];
        arr[0] = -MAX;
        sort(arr+1,arr+n+1); /// sort(name + lef , name + rig + 1);
        cout<<"Case "<<caseno++<<":\n";
        while(q--)
        {
            int a, b;
            cin>>a>>b;
            int R = srch(n,b), L = srch(n, a-1);
            cout<<R - L<<endl;
        }
    }
    return 0;
}

