/*  
    author : Abhishek Rajora (B20CS002) Brillard
*/

#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
#include <sstream> 
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pb push_back
#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()
#define rep(i,a,n) for(long long i=a; i<n; i++)
#define repe(i,a,n) for(long long i=a; i<=n; i++)
const int INF = 1e9;

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------


void solution(){
    ll n,m,k,count=0;
    string s;
    cin>>s;
    n=s.length();
    string max="0";
    string ans;
    rep(i,0,n-1){
        string x,y,z;
        x=s.substr(0,i-0);
        if (i+2<n) z=s.substr(i+2,n-i-1);
        int a=int(s[i])-'0'; int b=int(s[i+1])-'0';
        int c=a+b;
        // char *intStr = itoa(c);
        // string str = string(intStr);

        y=to_string(c);
        ans  = x+y+z;
        m=max.length();
        k=ans.length();
        if (k>m) max=ans;
        else if (k==m) { if (ans>max) max=ans;}

    }

    cout<<max<<"\n";
    
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