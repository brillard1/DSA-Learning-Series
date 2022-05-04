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

#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(ll i=a; i<n; i++)
#define repe(i,a,n) for(ll i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------


void permutation(ll n, ll k){
    ll count=1, d=1, a=1, b=1;
    rep(i,0,k){
        d=d*2;
        if (d>=n) d=d+1-n;
    }
    cout<<1<<" ";
    rep(i,1,n-1){
        if (a+d>n-1) b=a+d+1-n;
        else b=a+d;
        cout<<b<<" ";
        a=b;
    }
    cout<<n<<"\n";

}

void solution(){
    ll n,m=1,k,count=1;
    cin>>n>>k;

    ll d=1;
    rep(i,0,k){
        d=d*2;
        if (d>=n) d=d+1-n;
        if (d==1) break;
        count++;
    }
    m=count;
    if (k>m) k=k%m;

    permutation(n,k);


}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=1;
    cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}
