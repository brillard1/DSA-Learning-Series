/*  
    author : Abhishek Rajora (B20CS002) Brillard
*/

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
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
const int A=1e6;
//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------
int gcd(int a, int b){
    if (a==0 or b==0) return a^b;
    return __gcd(a,b);
}
void solution(){
    int n,m,k,count=0, max=0;
    cin>>n;
    vi v;
    bool present[A]={0};
    rep(i,0,n) { cin>>k; v.pb(k); present[k]=1; if (k>max) max=k;}
    repe(i,1,max){
        int g=0;
        for (int j = i; j<=max; j+=i){
            if (present[j]) g=gcd(g,j);
        }
        if (g==i) count++;
        present[i]=1;
    }
    cout<<count-n<<"\n";

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