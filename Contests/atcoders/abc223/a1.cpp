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

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

ll findpro(vector<vector<ll>> v, ll n, ll m){
    ll pro=n;
    if (m<v.size()){
        for(ll i=1; v[m].front()+1; i++){
            ll a = findpro(v,v[m][i], m+1);
            pro = pro *a;
        }
    }
    return pro;
}


void solution(){
    ll n,m,k,pro=1,count=0, a;
    cin>>n>>m;
    
    vector<vector <ll>> v; 
    for(ll i=0; i<n; i++){
        cin>>k;
        vector<ll> v1;
        v1.push_back(k);
        for (ll j=1; j<k+1; j++){
            cin>>a;
            v1.push_back(a);
        }
        v.push_back(v1);
    }

    for (ll i=1; i<v[0].front()+1; i++){
        a=findpro(v,v[0][i],1);
        if (a==m) count++;
    }
    cout<<count;
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    solution();

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}