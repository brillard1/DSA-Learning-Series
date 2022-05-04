#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
using namespace std;

void solution(){

    int n;
    cin>>n;
    int l[n];
    for (int i =0; i<n; i++){
        cin>>l[i];
    }
    int c=0, k=0, count=0;
    while (c==0){
        for (int i=0; i<n; i++){
            if (l[i]==k){
                count++;
                break;
            }
        }
        if (count==0) { c++; break;}
        k++;
        count=0;
    }


}

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t=0;
    cin>>t;
    while(t--){
        solution();
    }

    return 0;
}