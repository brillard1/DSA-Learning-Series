#include<bits/stdc++.h>
using namespace std;
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

int main(){
    priority_queue<int> pq;
    int n;
    cin>>n;
    for (int i=0; i<n; i++) { 
        int k;
        cin>>k;
        pq.push(k);
        cout<<pq.top()<<" ";
    }
    pq.pop();
    cout<<"\n";
    cout<<pq.top();

    return 0;
}