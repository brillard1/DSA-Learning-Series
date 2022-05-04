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

void solution(){
    int n,m,k,count=0;
    cin>>n;
    int l[n][2]={0};
    for (int i=0; i<n; i++){
        cin>>l[i][0];
    }
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (l[i][0]==l[j][0] and l[i][1]!=-1){
                l[i][1]++;
                l[j][1]=-1;
            }
            else if (l[i][0]==-l[j][0] and l[i][1]!=-1){
                l[i][1]++;
                l[j][1]=-1;
            }
        }

        k=l[i][1];
        if (k==0) count++;
        else if (k>0 and l[i][0]!=0) count+=2;
        else if (l[i][0]==0 and k>=0) count++;
    }

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