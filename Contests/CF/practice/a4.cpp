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
const int mod = 1000000007;
//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int divi(double x, int b){
    return int (x) / int (b);
}
int rem(double x, int b){
    return int(x)%int(b);
}

void solution(){
    int count=0,ans=0;
    double a,b,n,m;
    cin>>a>>b;

    if (b==1) { cout<<0<<"\n"; return;}
    repe(i,1,10000000){
        if (i%int(b)!=0){
            m = rem(i,b);
            n = divi(i,b);
            double k = n/m;
            if (k>=1 && k<=a){
                ans = ans%mod + i%mod ;
                ans = ans%mod;
            }
        }
    }
    cout<<ans<<"\n";
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=1;
    // cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}