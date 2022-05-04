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
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;
 
//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------
 
void solution(){
    ll n,m,k,count=0,a,b,c;
    cin>>a>>b>>c;
    if (c-b == b-a) { cout<<"YES\n"; return;}
 
    ll d,e,f,g,h,i;
    d=((2*b)-c)/a; g=d*a;
    e=((2*b)-a)/c; h=e*c;
    f=(c+a)/(2*b); i=f*b;
 
    if (c-b==b-g && d>0) cout<<"YES\n";
    else if (h-b==b-a && e>0) cout<<"YES\n";
    else if (2*i==a+c && f>0)  cout<<"YES\n";
    else cout<<"NO\n";
    // cout<<d<<" "<<e<<" "<<f;
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