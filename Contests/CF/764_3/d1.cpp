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
    int n,m=0,k,count=0,odd=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int vis[n]={0};
    rep(i,0,n){
        if (vis[i]!=-1){
            rep(j,i,n){
                if (s[i]==s[j]) { count++; if (i!=j) vis[j]=-1;}
            }
            if (count==1) { odd++; count--;}
            else if (count%2==0 && count>1) { count/=2; m+=count;}
            else {
                count=count/2; odd++; m+=count;
            }
            vis[i]=count;
        }
        count=0;
    }

    int ans1 = m/k;
    odd+=2*(m%k);

    if (ans1==0) cout<<1<<"\n";
    else if (odd>=k) cout<<2*ans1+1<<"\n";
    else cout<<2*ans1<<"\n";
    // cout<<m<<" "<<ans1<<" "<<odd;
    //m=50 odd=48 ans1=ans2=1 
    
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