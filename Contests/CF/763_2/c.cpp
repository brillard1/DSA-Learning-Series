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
int max(int a, int b){
    if (a>b) return a;
    return b;
}
void solution(){
    int n,m,k,count=0, a=0, b, h, min,p,q,r;
    cin>>n;
    int l[n];
    cin>>l[0];
    min=l[0]; k=0;
    for (int i=1; i<n; i++){
        cin>>l[i];
        if (min>l[i]) { min=l[i]; k=i;}
    }
    for (int i=2; i<n; i++){
        a=l[i]/3;
        p = l[i]-3*a; l[i]=p;
        q =l[i-1]+ a; l[i-1]=q;
        r = l[i-2]+ 2*a; l[i-2]=r;
    }
    for (int i=0; i<n; i++){
        if (min>l[i]) {min=l[i]; k=i;}
    }
    cout<<l[k]<<"\n";
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