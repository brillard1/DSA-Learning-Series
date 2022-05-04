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
    int n,m,k=0,count=0;
    cin>>n;
    int l[n]={0};
    int vis[n+1]={0};

    rep(i,0,n){
        cin>>k;
        while (k>n) k=k/2;
        l[i]=k;
        vis[k]+=1;
    }

    rep(i,0,n){
        m=l[i];
        if (vis[m]>1){
            while (vis[m]!=0) m=m/2;
            vis[l[i]]-=1;
            vis[m]+=1;
            // cout<<m<<" ";
        }
        if (m==0) { cout<<"NO\n"; return;}
        l[i]=m;
    }
    // cout<<"\n";

    repe(i,1,n){
        if (vis[i]==1) count++;
    }

    if(count==n) cout<<"YES\n";
    else cout<<"NO\n";
    
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