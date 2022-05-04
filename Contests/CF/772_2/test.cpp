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

bool check(vector<int> c, vector<int> s){
    rep(i,0,c.size()){
        if (c[i]<s[i]) return 1;
        else if (c[i]>s[i]) return 0;
    }
    return 0;
}

vector<int> perform(vector<int> v,int l, int r){
    vi ans;
    rep(i,0,l-1){
        ans.pb(v[i]);
    }
    rep(i,l,r){
        ans.pb(v[r-i]);
    }
    rep(i,r,v.size()){
        ans.pb(v[i]);
    }
    return ans;
}

void solution(){
    int n,m,k,count=0;
    cin>>n;
    vi v(n), s(n);
    vi c;
    rep(i,0,n) { cin>>v[i]; s[i]=v[i];}
    rep(i,0,n-1){
        rep(j,i+1,n){
            int l = i, r = j;
            c = perform(v,l,r);
            if(check(c,s)) s = c;
        }
    }
    for ( auto i : v){
        cout<<i<<" ";
    }
    cout<<"\n";
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