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
const long long INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    ll n,m,k, ans=0;
    cin>>n;
    ll t[n+1],p[n+1];
    ll ct=0,nt = 0,cp=0, np=0, dest=0,dx=0,steps=0,dir=0;

    t[n] = INF*10;

    rep(i,0,n){
        cin>>t[i]>>p[i];
    }
    rep(i,0,n){
        ct=t[i]; nt=t[i+1];

        if (cp == np - dir*(steps)) dest=p[i];
        dx = dest-np;
        steps = abs(dx);
        dir = dx>0 ? 1 : -1;
        cp = np;
        if (nt>=ct+steps) np = dest;
        else{
            np = cp + dir*(nt-ct);
        }
        // cout<<cp<<" "<<np<<" "<<steps<<" "<<dest<<"\n";

        if ((p[i]<=cp && p[i]>=np)) ans++;  // neg dir condn
        else if ((p[i]>=cp && p[i]<=np)) ans++; // pos dir condn
    }


    cout<<ans<<"\n";
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


/* 

4
3 3
5 -3
9 2
12 0

ct=t[i];   3 
nt=t[i+1];  5

cp = dest  0

if (cp==np) dest = b[i];  3



steps = abs(nt-ct);  3

nt-ct=2;
np = dest + steps; 


*/