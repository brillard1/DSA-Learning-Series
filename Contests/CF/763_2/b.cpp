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

int check(vector<vector<int>> v, int n, int l, int r, int m){
    int a=0, b=0, max=l, min=r;
    for (int i=0; i<n; i++){
        if(m!=i){
            if (v[i][0]==l and v[i][1]==r-1) { a++; return r;}
            else if (v[i][1]==r and v[i][0]==l+1) { b++; return l;}
            else if (v[i][0]==l){ 
                if (max<v[i][1] and v[i][1]<r) max=v[i][1];
            }
            else if (v[i][1]==r and v[i][0]>l){
                if (min>v[i][0] ) min=v[i][0];
            }
        }
    }
    if (max+1==min-1) return max+1;
    return max+1;
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

    for (int i=0; i<n; i++){
        l=pair[i][0];
        r=pair[i][1];
        if (l==r) d=l;
        else d = check(v, n , l , r, i);
        pair[i][2]=d;
        cout<<pair[i][0]<<" "<<pair[i][1]<<" "<<pair[i][2]<<"\n";
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