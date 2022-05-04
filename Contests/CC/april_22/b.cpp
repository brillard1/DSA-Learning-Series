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
    int n,m,k,count_even=0, count_odd=0, max=0, ans=0;
    cin>>n;
    vi v(n);
    rep(i,0,n) { cin>>v[i]; if (max<v[i]) max=v[i]; }
   
    vi vis(max+1);
    fill(vis.begin(), vis.end(), 0);

    rep(i,0,n) { 
        vis[v[i]]++;
    }
    rep(i,0,max+1){
        if (vis[i]%2==0 and vis[i]!=0) count_even+=vis[i];
        else if ((vis[i]-2) > 0 && vis[i]%2!=0){
            count_even+=(vis[i]-1);
            vis[i]=1;   
        }
        if(vis[i]==1) count_odd++;
        // cout<<vis[i]<<" "<<count_odd<<" "<<count_even<<nl;
    }
    // cout<<count_odd<<" "<<count_even<<nl;
    count_even = count_even % 4;

    // cout<<count_odd<<" "<<count_even;
    // cout<<nl;
    if (count_even != 0) {
        ans += 1;
        count_odd--;

        if (count_odd%2==0) ans += count_odd;
        else ans += 3 + count_odd-1;
    }
    else {
        if (count_odd%2==0 and count_odd!=0) {
            ans=count_odd;
        }
        else if (count_odd!=0) ans = 3 + count_odd-1;
    }
    // cout<<count_odd<<" "<<count_even<<nl;
    cout<<ans<<nl;
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