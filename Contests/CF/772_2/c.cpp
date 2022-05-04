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
    int n,m,k,count=0;
    cin>>n;
    vi v(n);
    vvi ans; 
    rep(i,0,n) cin>>v[i];

    if (v[n-2]>v[n-1]) { cout<<-1<<"\n"; return;}
    int c=0;
    rep(i,1,n){
        if (v[i]>=v[i-1]) c++;
    }
    if (c==n-1) { cout<<0<<"\n"; return;}
    
    count=0;
    int x,y,z;
    rep(i,0,n-2){
        v[i]=v[n-2]-v[n-1];
        vi s;
        x=i+1;
        y=n-1;
        z=n;
        s.pb(x);
        s.pb(y);
        s.pb(z);
        ans.pb(s);
        count++;
    }
    c=0;
    rep(i,1,n){
        if (v[i]<v[i-1]) c++;
    }
    if (c!=0) { cout<<-1<<"\n"; return;}
    cout<<count<<"\n";
    rep(i,0,count){
        rep(j,0,3){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
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