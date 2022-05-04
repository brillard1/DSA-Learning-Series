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
#define rep(i,a,n) for(long long i=a; i<n; i++)
#define repe(i,a,n) for(long long i=a, i<=n; i++)ll
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    ll n,m,k,count=0, max=-1, min=INF, x, y;
    cin>>n;
    vector<ll> v;
    vector<ll> s;
    rep(i,0,n){
        cin>>k;
        v.push_back(k);
    }
    rep(i,0,n-1){
        rep(j,i+1,n){
            k=v[i]&v[j];
            s.push_back(k);
        }
    }
    n=s.size();
    sort(v.begin(), v.end());
    max=v[n-1]; min=v[0];
    while (n>1){
        k=max|min;
        s.erase(s.begin());
        s.pop_back();
        if (k>s.back()) { max=k; s.push_back(k);}
        else if (k<s.front()) { min=k;  v.insert(v.begin(), k);}
        n--;
    }

    cout<<s[0]<<"\n";


}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int main(){

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