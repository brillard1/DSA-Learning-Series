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

void solution(){
    int n,m,l=0,k,count=0,ans=0;
    cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];

    m=a[n-1];
    for (int i = n-1; i>=0; i-- ) { 
        if (a[i]==m) count++;
        else {
            
            ans+=1;
            if (count>i) i=0; 
            else i-=count-1;  // i = 3 and n = 6
            count*=2;
        }
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

/*                indexing  1 2 3 4 5 6    a[i+l]=a[i+k+l]
For example, if          a=[2,1,3,4,5,3], then choose l=1 and k=2, applying this operation the array will become a=[3,4,3,4,5,3].
    0<=i<=k-1  i={0,1} k=2 [3,4,3,4,5,3]
    i ={} replacing everything
    
    We cannot change the last element. so we'll have to make em all equal to a[n](1indexing)
    max k = n/2

    4
    4 2 1 3
    4 2 3 3
    l=3 k=1
    3 3 3 3
    l=1 k=2 
    
    6
    2 1 3 4 5 3
    l=5 k=1
    2 1 3 4 3 3
    l=3 k=2
    2 1 3 3 3 3
    l=1 k=2
    3 3 3 3 3 3

*/