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

bool check(int rb, int cb, int rd, int cd){
    if (rb==rd or cb==cd) return 1;
    return 0;
}

int min(int a, int b){
    if(a<=b) return a;
    else return b; 
}

void solution(){
    int n,m,dr=1,dc=1,rb,cb,rd,cd,count=0, c=0, p,q, a, b;
    cin>>n>>m>>rb>>cb>>rd>>cd;

    p=check(rb,cb,rd,cd);
    if (p==1) { cout<<count<<"\n"; return;}
    a=rd-rb; b=cd-cb;
    if (a<0) a=2*(n-rb)+rb-rd;
    if (b<0) b=2*(m-cb)+cb-cd;
    count=min(a,b);
    
    cout<<count<<"\n";
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
