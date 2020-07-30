#include <bits/stdc++.h>
using namespace std;

bool not_in_Vector(vector <int>p , int elem){
    int size = p.size();
    for(int i = 0; i<size; i++){
        if(elem==p[i]){
            return false;
        }
    }
    return true;
}
vector <int>return_perm(vector <int>a , int n){
    vector <int>p ;
    int size = 0, size_a = 2 *n;
    for(int i = 0; i<size_a; i++){
        if(size==0){
            p.push_back(a[i]);
            size++;
        }else if(not_in_Vector(p , a[i])){
            p.push_back(a[i]);
            size++;
        }else if(size==n){
            break;
        }
    }
    return p;
}

int main(){
    int t;
    cin>>t;

    vector <vector <int>>ans;
    int n;
    for(int i = 0; i<t; i++){
        cin>>n;
        vector <int>inp_arr;
        int inp;
        for(int j = 0; j<2*n; j++){
            cin>>inp;
            inp_arr.push_back(inp);
        }
        ans.push_back(return_perm(inp_arr , n));
    }

    for(int i = 0; i<t; i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}