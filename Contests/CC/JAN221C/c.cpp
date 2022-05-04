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

#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(int i=a; i<n; i++)
#define repe(i,a,n) for(int i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int bintodec(string s){
    int a,b,c=0,ans=0;
    for (int i=0; i<s.length(); i++){
        a=pow(2,s.length()-i-1);
        b=int(s[i]) - '0';
        if (s[i]=='1') { c=1; }
        if (c!=0) {
            if (a!=1) ans+=a+b;
            else ans+=b;
        }
    }
    return ans;
}

int checkprime(int n){
    int a=sqrt(n);
    int count=0;
    rep(i,2,a){
        count++;
    }
    if (n==1  or n==0) return 0;
    if (a!=0 && count==0) return 1;
    return 0;
}

void solution(){
    int n,m,k=0,count=0;
    string s;
    cin>>s;
    n=s.length();
    rep(i,0,n){
        rep(j,i+1,n){
            m = bintodec(s.substr(i,j-i+1));
            k=checkprime(m);
            if (k==1) break;
        }
        if (k==1) break;
    }
    if (k==1) cout<<"YES\n";
    else cout<<"NO\n";
    
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