#include <bits/stdc++.h>
using namespace std;

long long n_c2(long long n){
    long long ans = 0;
    if(n%2==0){
        ans = n/2 - 1;
    }else{
        ans = n/2;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    vector <long long>ans;
    long long n;
    for(int i = 0; i<t; i++){
        cin>>n;
        ans.push_back(n_c2(n));
    }    

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}