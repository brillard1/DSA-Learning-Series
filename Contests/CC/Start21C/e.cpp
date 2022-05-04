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
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int lcm(int a, int b){
    int k = max(a,b);
    int ans=a*b;
    for (int i=k; i>0; i--){
        if (a%i==0 && b%i==0) {
            ans=ans/i; a=a/i; b=b/i;
        }
    }
    return ans ;
}

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
    return v1[1] > v2[1];
}


void solution(){
    int n,m,k,count=0;
    cin>>n>>m;
    if (m==1) { cout<<0<<"\n"; return;}
    if (m=2 && n>2) { cout<<0<<"\n"; return;}

    vector<vector<int> > v;
    rep(i,2,m-1){
        vector<int> v1;
        if (m%i==0) { v1.push_back(i); v1.push_back(0); v.push_back(v1);}
    }
    sort(v.begin(), v.end(),sortcol);
    // while (v[v.size()-1][1]!=0){

    // }
    cout<<v[0][0];
    
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