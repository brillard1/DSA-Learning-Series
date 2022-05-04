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
    int n,m=0,k,count=0,distodd=0, min=INF;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> vis(n);

    rep(i,0,n){
        rep(j,i+1,n){
            if (s[i]==s[j]) count++;
        }
        if (count==0) { distodd++; m=1;}
        else if (count%2!=0) { distodd++; count--; m=1;}
        vis[i]+=count;
        if (count>1 && min>count) min=count;
        count=0;
    }

    //print the max palindrome of smallest number
    if (min!=INF && min<=k) { cout<<min<<"\n"; return;}
    else if (min!=INF && min+m<=k) { cout<<min+m<<"\n"; return;}
    if (min==INF) min=0;
    count=min;
    sort(vis.begin(),vis.end());
    rep(i,0,n){
        if (vis[i]%2==0) count++;
        if (count>=k) { cout<<count<<"\n"; return;}
        else if (count+m>=k) { cout<<count<<"\n"; return;}
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