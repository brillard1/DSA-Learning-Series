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

int nod(int n){
    int m=n, c=0;
    while (m>0){
        m=m/2;
        c++;
    }
    return c;
}

void solution(){
    int n,m,k,x=0,y=0,m1=0,m2=0,count=0,c;
    cin>>k>>n;
    vector<int> v;
    m1=nod(n);
    int l[m1]={0};

    for (int i=k; i<=n; i++){
        m=i;
        x=nod(m);
        while (m > 0) {
            m2=nod(m);
        if (m & 0) {    
            l[m2-1]++;
        }
        m = m >> 1; }
        for (int j=0; j<m1-x; j++){
            l[j]++;
        }
    }
    c=l[0];
    for (int i=0; i<m1; i++){
        if (c>=l[i]) c=l[i];
        cout<<l[i]<<" ";
    }
    cout<<endl;
    cout<<c<<"\n";

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