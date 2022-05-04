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
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
#define mp make_pair

#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
const char nl = '\n';
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m,k,count=0;
    cin>>n;
    vi v(n);

    rep(i,0,n) cin>>v[i];
    
    int q;
    cin>>q;
    int a,b;

    rep(i,0,q){
        cin>>a>>b;
        int min = INF;
        rep(i,a-1,b-1){
            k = v[i]|v[i+1];
            if (min>=k) min = k;
        }
        cout<<min<<nl;
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