#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sign(ll x){
    if(x<0){
        return -1;
    }
    return 1;
}

int main(){
    ll x, y;
    cin>>x>>y;
    ll sum = x*sign(x) + y*sign(y);
    ll x1 = sum*sign(x);
    ll y2 = sum*sign(y);
    if(x1<0){
        cout<<x1<<" "<<0<<" "<<0<<" "<<y2;
    }else{
        cout<<0<<" "<<y2<<" "<<x1<<" "<<0;
    }
    return 0;
}
