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
    string s,ans="";
    cin>>s;
    n=s.length();
    int vis[52]={0};
    rep(i,0,n){
        rep(j,i+1,n){
            if (s[i]==s[j]) { vis[i]=2; vis[j]=3;}
        }
        if (vis[i]==2) { ans+=s[i]; ans+=s[i];}
        if (vis[i]==0) { vis[i]=1; count++; ans+=s[i];}
    }
    cout<<ans<<"\n";
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