/*  
    author : Abhishek Rajora (B20CS002) Brillard
*/

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

#define vi vector<long long>
#define vvi vector<vector<int>>
#define pb push_back
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(long long i=a; i<n; i++)
#define repe(i,a,n) for(long long i=a; i<=n; i++)
const ll INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    ll n,m,k,count=0;
    cin>>n;
    vi rating(n);
    ll max=0;
    ll ans[n]={0};
    rep(i,0,n){
        cin>>rating[i];
        if (max<rating[i]) max=rating[i];
    }
    ll vis[max+1]={0};
    rep(i,0,n){

        if (vis[rating[i]]==0){
            ans[i]=rating[i];
            vis[rating[i]]++;
        }
        else {
            ans[i]=rating[i] + vis[rating[i]];
            vis[rating[i]]++;
        }
        cout<<ans[i]<<" ";;
    }
    cout<<"\n";

}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    ll t=1;
    // cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}