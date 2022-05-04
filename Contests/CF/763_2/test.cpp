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

int check( int n, vector<vector<int>> v, int l, int r){
    if (l==v[0][0] ) return 1;
    return 0;
}

void solution(){
    int n,m,k,count=0, a, b, l, r, d;
    cin>>n;
    vector<vector <int>> v;
    int pair[n][3];
    for (int i=0; i<n; i++){
        vector<int> v1;
        cin>>pair[i][0]>>pair[i][1];
        v1.push_back(pair[i][0]);
        v1.push_back(pair[i][1]);
        v.push_back(v1);
    }
    l=pair[0][0]; r=pair[0][1];
    d = check (n, v, l, r);
    cout<<d;
    
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=0;
    t=1;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}