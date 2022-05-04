/*  
    author : Abhishek Rajora (B20CS002) Brillard
*/

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m1=0,k=0,count=0,r,c, ans=0,m;
    cin>>n>>m>>r>>c;
    string s;
    m1=0; k=0; ans=0;
    rep(i,0,n){
        cin>>s;
        for (int j=0; j<m; j++){
            if (s[j]=='W') k+=1;
            if (s[j]=='B') { if (i==r-1 or j==c-1) m1++;}
            if (s[j]=='B') { if(i==r-1 && j==c-1) ans +=1;}
        }
    }
    if (k==n*m) cout<<-1<<"\n";
    else if (ans>=1) cout<<0<<"\n";
    else if (m1>=1) cout<<1<<"\n";
    else cout<<2<<"\n";

}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t=0;
    cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}