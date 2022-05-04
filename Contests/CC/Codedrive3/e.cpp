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

ll countdiv(ll num){
    ll count=0;
    int square_root = (ll) sqrt(num) + 1;
    for (ll i = 1; i < square_root; i++) { 
    if (num % i == 0) {
        count++;
    }}
    return count;
}

void solution(){
    ll n,m,k=2,count=0;
    cin>>n;
    ll sq = sqrt(n) + 1;
    for (ll i=2; i<=n; i++){
        if (n%i==0){
            m=n/i;
            if (count<countdiv(m)) { count = countdiv(m); k=i;}
        }
    }
    cout<<k<<"\n";
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