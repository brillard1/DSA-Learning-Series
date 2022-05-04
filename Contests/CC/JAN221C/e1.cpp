#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    if(n==1){
	        cout<<k<<endl;
	        continue;
	    }
	    vector<int>v(n,0);
	    int p=0;
	    int c=(1ll<<18);
	    for(int i=0;i<n-1;i++){
	        p=p^i;
	        v[i]=i;
	    }
	    int x=p^k;
	    if(n-1<=x&&x<=500000)
	    v[n-1]=x;
	    else {
	        v[n-1]=x^c;
	        if(v[0]^c==v[n-1]) {
	            v[1]=v[1]^c;}
	            else
	            v[0]=v[0]^c;
	    }
	    for(int i=0;i<n;i++)
	    cout<<v[i]<<" ";
	    cout<<endl;
	    
	}
}
