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

#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m,k,count=0;
    cin>>n;
    int l[n][2]={0};
    int ans[n]={0};
    rep(i,0,n) cin>>l[i][0];
    rep(i,0,n) cin>>l[i][1];

    ans[0]=(l[0][2]+1)*l[0][2]/2;
    count=ans[0];
    rep(i,1,n){
        int h=l[i][1]; k=l[i][0]; int k1=l[i-1][0]; int a1=ans[i-1]; int h1 = l[i-1][1];
        if (h<k-k1) { ans[i]= (h+1)*h/2; count+=ans[i];}
        else {
            int j = k-h;
            h=(h+1)*h;
            ans[i]=h/2;
            count+=ans[i]-ans[i-1];
        }
    }
    cout<<count<<"\n";

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