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
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a, i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m,k,count=0;
    cin>>n;
    vector<int> l(n),r(n),s(n);
    int mn=INF;
    int mx=0;
    int ans=0; 
    int sum=0;
    int minl=INF, minr=INF, minlr=INF;
    rep(i,0,n){
        cin>>l[i]>>r[i]>>s[i];
        if (l[i]<mn){
            mn=l[i];
            minl=INF;
            minlr=INF;
        }
        if (r[i]>mx){
            mx=r[i];
            minr=INF;
            minlr=INF;
        }
        if (l[i]==mn){
            minl=min(minl, s[i]);
        }
        if (r[i]==mx){
           minr=min(minr, s[i]);
        }
        if (l[i]==mn && r[i]==mx){
            minlr=min(minlr, s[i]);
        }
        cout<<min(minl+minr, minlr)<<"\n";
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