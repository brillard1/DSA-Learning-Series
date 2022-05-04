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

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

ll bintoint(ll n){
    ll num = n;
    ll dec_value = 0;
 
    ll base = 1;
 
    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}

ll inttobin(ll n)
{   
    ll count=0;
    ll binaryNum[32];
 
    ll i = 0;
    while (n > 0) { 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    for (ll j = i - 1; j >= 0; j--){
        if (binaryNum[j]==1) count++;    
    }
    return count;
}


void solution(){
    ll n,m,k,count=0, dec, bin;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<string> v;
    if (k>n) return;
    for (ll i=0;i<=n-k; i++){
        v.push_back(s.substr(i,k));
    }
    ll a, b;
    ll l[k]={0};

    string g = v[0];
    a=stoll(g);
    dec=bintoint(a);
    b=dec;
    for (ll j=1; j<v.size(); j++){
            string g = v[j];
            a=stoll(g);
            dec=bintoint(a);
            b=b^dec;
        }
    bin=inttobin(b);
    cout<<bin<<"\n";
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

    // for (int i=0; i<k; i++){
    //     for (int j=0; j<v.size(); j++){
    //         string g = v[j];
    //         char d=g[i];
    //         a=d - int('0');
    //         b=b^a;
    //     }
    //     l[i]=b;
    //     b=0;
    // }