#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll largest_rem(ll x , ll y , ll n){
    ll k = 0;

    ll quo = n/y;
    if(n%y==0){
        return n;
    }

    while(quo*x + y>n && quo>=0){
        quo = quo-1;
        if(quo*x + y <n){
            return (quo *x + y);
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;

    ll x , y , n;
    vector <ll>ans;
    for(int i = 0; i<t; i++){
        cin>>x>>y>>n;
        ans.push_back(largest_rem(x , y , n));
    }
    
    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}