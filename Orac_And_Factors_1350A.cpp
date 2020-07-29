#include <bits/stdc++.h>
using namespace std;

int smallest_div(int n){
    for(int i = 2; i<=n; i++){
        if(n%i==0){
            return i;
        }
    }
    return 0;
}

int ans_factor(int n , long long k){
    int ans = 0;
    ans = n + smallest_div(n) + 2 * (k-1);
    return ans;
}

int main(){
    int t;
    cin>>t;

    int n; 
    long long k;
    vector <int>ans_arr;
    for(int i = 0; i<t; i++){
        cin>>n>>k;
        ans_arr.push_back(ans_factor(n , k));
    }
    
    for(int i = 0; i<t; i++){
        cout<<ans_arr[i]<<endl;
    }
    return 0;
}