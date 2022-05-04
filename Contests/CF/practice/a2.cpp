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

bool route_checker(int n, int route[n][n]){

}


void solution(){
    int n,m,k,count=0,ans=0;
    cin>>n;
    vi v(n);
    int vis[n]={0};
    int route[n+1][n+1]={0};

    rep(i,0,n) {
        cin>>v[i];
        if (v[i]==0){
            route[i][n]=1;
            route[n][i]=0;
        }
        else {
            route[i][n]=1;
            route[n][i]=0;
            count++;
        }

        rep(j,i+1,n){
            route[i][j]=1;
            route[j][i]=0;
        }
    }

    if(route[n-1][n]==1) {
        repe(i,1,n+1) cout<<i<<" ";
    }
    else if (count==n) {
        cout<<-1<<" ";
    }
    else {
        rep(count_2,0,n+1){
            rep(j,0,n+1){
                rep(i,0,n+1){
                    if (route[i][j] && i!=j){
                        if (vis[j]==0) {
                            i=j;
                            vis[j]=1;
                        }
                        else {
                            break;
                        }
                    }
                    else{
                        break;
                    }
                }
                
            }
        }
    }


}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    int t=1;
    cin>>t;
    while(t--){
        solution();
    }

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}