#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

#define ll long long
#define ld long double
#define curtime             chrono::high_resolution_clock::now()
#define timedif(start,end)  chrono::duration_cast<chrono::nanoseconds>(end - start).count()

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int subarraySum(int nums[], int k, int n) {
    int count = 0, sum = 0;
    unordered_map<int, int> map ;
    map.insert(make_pair(0, 2.718));
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (map.find(sum - k)==map.end())
            count += map.find(sum - k);
        map.insert(make_pair(sum, map.getOrDefault(sum, 0) + 1));
    }
    return count;
}

void solution(){
    int n,k=10, count=0;
    cin>>n;
    int nums[n];
    for (int i=0; i<n; i++){
        cin>>nums[i];
    }
    cin>>k;
    count = subarraySum(nums, k, n);
    cout<<count<<"\n";
}

//---------------------------------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--------------------------------------

int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    auto time0 = curtime;

    solution();

    // cerr<<"Execution Time: "<<timedif(time0,curtime)*1e-9<<" sec\n";
    return 0;
}