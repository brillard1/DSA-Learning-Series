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
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;
const int maxi = 500000;
//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int calxr(int n, int l[]){
    int xr=0;
    rep(i,0,n-1) { xr^=i;  l[i]=i;}
    return xr;
}

void solution(){
    int n,m,k,x,c=0,count=0;
    cin>>n>>k;
    int l[n]={0};
    if (n==1) { cout<<k<<"\n"; return;}
    int xr = calxr(n,l);
    x=xr^k;
    int seg=(1ll<<18);

    if (x>=n-1 && x<=maxi){
        l[n-1]=x;
    }
    else{
        l[n-1]=x^seg;
        if (l[0]^seg==l[n-1]) { l[1]=l[1]^seg;}
        else l[0]=l[0]^seg;
    }
    rep(i,0,n) cout<<l[i]<<" ";
    cout<<"\n";
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