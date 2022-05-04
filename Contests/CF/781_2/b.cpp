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

int count_operation(int n,int k, int count){

    if (n<=k) return count;

    if (k<=n/2) return count_operation(n,2*k,count+1+k);
    else return count_operation(n,n, count+1+n-k);

    return count;
}

void solution(){
    int n,m,k=0,sum=0;
    cin>>n;
    vi v(n);

    rep(i,0,n) cin>>v[i];

    int freq = 0, max = 0;

    sort(v.begin(), v.end());

    rep(i,1,n){
        if (v[i]==v[i-1]) freq++;
        else freq = 0;
        
        if (max<=freq) max=freq;

    }

    k = max+1;
    // cout<<k<<nl;


    // operation
    if (k==n) cout<<0<<nl;
    else {
        int count_op = 0;
        count_op = count_operation(n,k,0);
        cout<<count_op<<nl;
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