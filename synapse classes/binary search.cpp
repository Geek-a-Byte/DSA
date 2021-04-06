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


int arr[1005];


int main()
{
    /*
    problem: given a sorted array of size n and q queries. given a value in each query, find
    the index of this value
    */

//    fastio;
    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++) cin>>arr[i];
    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        int L = 1 , R = n;
        while(L < R){
            int mid = (L + R)/2;
//            if(arr[mid] == val) L = R = mid;
            if(arr[mid] < val) L = mid + 1;
            else R = mid;
        }
        if(arr[L] == val) cout<<L<<endl;
        else cout<<"-1\n";
    }
    return 0;
}
