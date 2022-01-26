#include<bits/stdc++.h>
using namespace std;
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

const int N = 1e5;
bool visited[N]={false};

int vis

void dfs(int s) {
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) {
        dfs(u);
    }
}

int main(){
    

    return 0;
}

