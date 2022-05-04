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

void (sort(int ))

void solution(){
    int n,m,k,count=0;
    cin>>n;
    string s, a="", b="", c;
    cin>>s;
    vector<string> l;

    for (int i=1; i<n+1; i++){
        for (int j=0; j<i; j++){
            a+=s[j];
            b+=s[i-j-1];
        }
        c=a+b;
        l.push_back(c);
        a="";
        b="";
    }

    sort(l,n);

    for (int i=0; i<n; i++){
        cout<<l[i]<<" ";
    }
    

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