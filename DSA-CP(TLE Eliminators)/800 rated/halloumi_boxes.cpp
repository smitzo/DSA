#include <bits/stdc++.h>
using namespace std;

string check(int n, int k, vector <int>&v){
    if (is_sorted(v.begin(),v.end()) || k>1){
        return "YES";
    }
    else{
        return "NO";
    }
}
signed main(){
    int i, n, k, t;
    i=0;
    cin >> t;
    while(t--){
        cin>>n>>k;
        vector<int>v(n);
        for (int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<check(n,k,v)<<endl;
    }
    return 0;
}
       