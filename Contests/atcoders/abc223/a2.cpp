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

void solution(){
    ll n,m,k,count=0;
    cin>>n>>m;
    vector<int> v;

    for (ll i=0; i<n; i++){
        cin>>k;
        v.push_back(k);
    }

    ll sum=0;

    for (ll i=0; i<n; i++){
        sum=v[i];
        if (sum==m) count++;
        for (ll j=i+1; j<n; j++){
            sum+=v[j];
            if (sum==m) count++;
        }
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