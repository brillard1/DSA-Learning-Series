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

#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m=-1,k=-1,count=0;
    cin>>n;

    int l[n];
    int s[n];
    int max1 =0, max2=0, in, a, b, c, d;
    vi v,h;

    rep(i,0,n) { cin>>in; v.pb(in);}

    rep(i,0,n) { cin>>in; h.pb(in);}

    rep(i,0,n){
        if (v[i]>h[i]) { swap(h[i],v[i]); }
    }
    sort(v.begin(),v.end());
    sort(h.begin(),h.end());
    ll maxa=v[n-1], maxb=h[n-1];

    cout<<maxa*maxb<<"\n";
    
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=0;
    cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}