#include <bits/stdc++.h>
using namespace std;

bool checkPerfectSquare(int n){
    int left = 1, right = n;
    int mid = 0;
    while(left<=right){
        mid = (left + right)/2;
        int prod = mid*mid;
        if(prod<n){
            left = mid+1;
        }else if(prod>n){
            right = mid-1;
        }else{
            return true;
        }
    }
    return false;
}

bool isValidCase(vector<int>arr){
    for(int i: arr){
        if(!checkPerfectSquare(i)){
            return true;
        }
    }
    return false;
}

int main(){
    int t,n;
    cin>>t;
    for(int i = 0; i<t; i++){
        cin>>n;
        int inp;
        vector<int>arr;
        for(int j = 0; j<n; j++){
            cin>>inp;
            arr.push_back(inp);
        }
        if(isValidCase(arr)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}