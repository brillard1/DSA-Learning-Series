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
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

void solution(){
    int n,m,k,count=1;
    cin>>m>>n;
    int l[n]={0};
    while (count<=n){
        int ans = 1;
        int vis[n+1]={0};
        rep(i,1,count){
            int c=1, cn=0;
            int p=count-i+1;
            int k=(m-1)%p;
            repe(j,c,p+k){
                if (vis[j]==0) cn+=1;
                if (cn==1+k) { cn=j; break;}
            }
            vis[cn]=1;
            cn=0;
            repe(i,1,count){
                if (vis[i]==0) { c=i; break;}
            }
        }
        repe(i,1,count){
            if (vis[i]==0) { ans=i; break;}
        }

        l[count-1]=ans;
        
        repe(i,1,count){
            vis[i]=0;
        }
        count++;
        
    }
    rep(i,0,n) cout<<l[i]<<" ";
    cout<<"\n";
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