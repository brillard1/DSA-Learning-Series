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
    int n,m,k,x=0,y=0,m1,m2,count=0;
    cin>>n;
    int l[n];
    vector<int> v;
    for (int i=0; i<n; i++){
        cin>>l[i];
    }
    while (count<2){
        count=0;
        m1=l[0]; m2=l[0];
        for (int i=0; i<n; i++){
            if (m1<=l[i]) { m1=l[i]; x=i;}
            if (m2>=l[i]) { m2=l[i]; y=i;}
        }

        v.push_back(m1-m2);
        if ((m1-m2)%2==0) { m1=(m1+m2)/2; m2=m1; l[x]=m1; l[y]=m2; }
        else {m1=1 + (m1+m2)/2; m2= m1 -1 ; l[x]=m1; l[y]=m2; }
        
        for (auto i : v){
            if (i==m1-m2) { count++; }
        }}

        k=v.back();
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