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
    int n,m=0,k=0,count=0;
    cin>>n;
    vi v(n);
    vi c;
    rep(i,0,n) { cin>>v[i];}
    rep(i,1,n-1){
        if (v[i]>v[i-1] && v[i]>v[i+1]) c.pb(i);
    }
    // rep(i,0,c.size()) cout<<c[i]<<" ";
    // cout<<"\n";
    rep(i,0,c.size()){
        // cout<<i<<" "<<c[i]<<"\n";
        if (i+1<c.size()) { if (c[i+1]-c[i]==2) { v[c[i]+1]=max(v[c[i]], v[c[i+1]]); count++; i++;}
        else{
            v[c[i]]=max(v[c[i]-1],v[c[i]+1]);
            if (i==c.size()-1) { 
                v[c[i+1]]==max(v[c[i+1]+1], v[c[i+1]-1]);
                count++;
            }
            count++;
        }
        }
        else {
            v[c[i]]=max(v[c[i]-1],v[c[i]+1]);
            count++;
        }
    }
    cout<<count<<"\n";
    rep(i,0,n){
        cout<<v[i]<<" ";
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