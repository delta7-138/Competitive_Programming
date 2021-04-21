#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

vector <int>findMaxMin(ull n){
    int min = 10, max = 0;
    vector<int>ans;
    while(n!=0){
        int r = n%10;
        n = n/10;
        if(r>max){
            max = r;
        }
        if(r<min){
            min = r;
        }
    }
    ans.push_back(min);
    ans.push_back(max);
    return ans;
} 

ull solve(ull a1 , ull k){
    ull ans = a1;
    for(int i = 0; i<k-1; i++){
        vector<int>tmp = findMaxMin(ans);
        if(tmp[0]==0){
            return ans;
        }
        ans = ans + tmp[0]*tmp[1];
    }
    return ans;
}

int main(){
    int t;
    ull a1,k; 
    cin>>t;

    for(int i = 0; i<t; i++){
        cin>>a1>>k;
        cout<<solve(a1 , k)<<endl;
    }
    return 0;
}