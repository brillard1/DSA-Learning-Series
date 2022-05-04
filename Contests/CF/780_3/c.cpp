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
const char nl = '\n';

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    // int n,m,k,count=0;
    // string s, ans="";
    // cin>>s;
    // n=s.length();
    // vi a,b;

    // rep(i,0,n-1){
    //     if (s[i]==s[i+1]){
    //         ans+=(s[i]+s[i+1]);
    //         a.pb(i);
    //         a.pb(i+1);
    //         i++;
    //     }
    //     else{
    //         b.pb(i);
    //     }
    // }

    // int cnt[26];
    // rep(i,0,n){
    //     if (cnt[s[i]-'a']==1){
    //         ans+=s[i];
    //         ans+=s[i];
    //         rep(i,0,26){
    //             cnt[s[i]-'a'] = 0;
    //         }
    //     }
    //     else{
    //         cnt[s[i]-'a']++;
    //     }
    // }
    // cout<<s.size() - ans.size()<<nl;
    
    string s;
    cin>>s;
    vi cnt(26);
    int ans = 0;
    rep(c,0,s.length()) {
        if(cnt[s[c]-'a'] == 1) {
            ans += 2;
            rep(i,0,26) cnt[i] = 0;
        }
        else cnt[s[c]-'a']++;
    }
    cout<<s.size()-ans<<'\n';

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