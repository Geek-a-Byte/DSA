#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;



int main()
{
	/// problem link: https://codeforces.com/gym/101864 (F of this set)
    fastio;
    int t , caseno = 1;
    cin>>t;
    while(t--){
        int n , k , q;
        cin>>n>>k>>q;
        set < pair < int , int > > hole;
        hole.insert({k+1,n});
        cout<<"Case "<<caseno++<<":\n";
        while(q--){
            int x , y;
            cin>>x>>y;
            hole.insert({x,x});
            set < pair < int , int > > :: iterator itt = hole.find({x,x}) , pre , post;
            pre = itt;
            if(itt != hole.begin()){
                pre--;
                if((*pre).second + 1 == (*itt).first){
                    pair < int , int > tmp = {(*pre).first , (*itt).second};
                    hole.erase(pre);
                    hole.erase(itt);
                    hole.insert(tmp);
                    itt = hole.find(tmp);
                }
            }
            post = itt;
            if(itt != hole.end()){
                post++;
                if((*itt).second + 1 == (*post).first){
                    pair < int , int > tmp = {(*itt).first , (*post).second};
                    hole.erase(itt);
                    hole.erase(post);
                    hole.insert(tmp);
                }
            }

            itt = hole.lower_bound({y,y});
            if(itt == hole.end() || (*itt).first > y) itt--;
            pair < int , int > tmp = *itt;
            hole.erase(itt);
            if(y > tmp.first) hole.insert({tmp.first , y-1});
            if(y < tmp.second) hole.insert({y + 1 , tmp.second});

            cout<<hole.size()<<endl;
        }
    }
    return 0;
}
