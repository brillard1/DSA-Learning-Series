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
    int n,m,k,count=0;
    cin>>n>>k;
    string s, f, g;
    cin>>s;
    vector<string> v;
    if (k>n) return;
    for (int i=0;i<=n-k; i++){
        f=s.substr(i,k);
        v.push_back(f);
    }
    int a=0, b=0;
    int l[k]={0};
    for (int i=0; i<k; i++){
        for (int j=0; j<v.size(); j++){
            g = v[j];
            char d=g[i];
            a = d - 48;
            if (a==1) l[i]=1;
            // cout<<g<<" ";
        }
    }

    for (int i=0; i<k; i++){
        if (l[i]==1) count++;
    }
    // for (int i=0; i<v.size(); i++){
    //     cout<<v[i]<<"\n";
    // }
    cout<<count<<"\n";
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