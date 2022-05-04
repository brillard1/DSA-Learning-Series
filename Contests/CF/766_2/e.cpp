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

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] > v2[1];
}

void solution(){
    int n,m,k,count=0;
    cin>>n>>m>>k;
    int l[n];
    vvi v(k,vector<int> (6));
    rep(i,0,n) { cin>>l[i];}
    int p=0, q=0;
    int a, b, c, d, h,x;
    int ans=0;
    rep(i,0,k){
        cin>>a>>b>>c>>d>>h;
        a--; b--; c--; d--;
        v[i][0]=a; v[i][1]=b; v[i][2]=c; v[i][3]=d; v[i][4]=h; v[i][5]=l[i];
    }
    sort(v.begin(), v.end(),sortcol);
    rep(i,0,k){
        a = v[i][0]; b = v[i][1]; c = v[i][2]; d = v[i][3]; h = v[i][4]; x=v[i][5];
        if (p<=a){
            ans+=v[i][5]*(abs(b-q));
            ans-=h;
            p=c; q=d;
        }
    }
    if (ans<0) cout<<"NO ESCAPE\n";
    else cout<<ans<<"\n";
    
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