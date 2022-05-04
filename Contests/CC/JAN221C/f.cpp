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
    int n,m,k,q,count=0,sum=0, max=0;
    cin>>n>>q;
    int ls[n+1]={0};

    repe(i,1,n){
        cin>>ls[i];
        if (max<ls[i]) max=ls[i];
    }

    int vis[max+1]={0};
    int l[n+1][3]={0};

    repe(i,1,n){
        int j = ls[i];
        if (vis[j]==0) count++;
        vis[j]=1;
        l[i][0]=count;
        sum+=count;
        l[i][1]=sum;
    }
    int ans=0;
    repe(j,1,n){
        ans+=j*(l[j][0]+1) - l[j][1];
        l[j][2]=ans;
    }

    repe(i,1,q){
        int a, b, ans=0, c;
        cin>>a>>b;
        if (a==2) cout<<l[b][2]<<"\n";
        else cin>>c;
    }
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=1;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}