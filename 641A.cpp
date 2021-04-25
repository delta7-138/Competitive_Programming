#include <bits/stdc++.h>
#define LARGE 100000
using namespace std;
typedef long l;

bool solve(int n , string pat , vector<l>weights){
    int size = pat.length();
    int ctr = 1;
    for(int i = 0; i<LARGE;i++){
        char c = pat[ctr-1];
        if(c=='>'){
            ctr = ctr + weights[ctr-1];
        }else if(c=='<'){
            ctr = ctr - weights[ctr-1];
        }
        if(ctr<=0 || ctr>n){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    string pattern;
    cin>>pattern;
    vector<l>weights;
    l inp;
    for(int i = 0; i<pattern.length(); i++){
        cin>>inp;
        weights.push_back(inp);
    }
    if(solve(n , pattern , weights)){
        cout<<"INFINITE";
    }else{
        cout<<"FINITE";
    }
    return 0;
}