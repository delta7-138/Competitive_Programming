//greedy implementation math
#include <iostream>
#include <vector>
using namespace std;
int find_min_steps(long long a , long long b){
    if(a==b){
        return 0;
    }

    if(a>b){
        if((a%2)==(b%2)){
            return 1;
        }else{
            return 2;
        }
    }

    if(a<b){
        if(a%2==b%2){
            return 2;
        }else{
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;

    long long a , b;
    vector <int>ans;
    for(int i = 0; i<t; i++){
        cin>>a>>b;
        ans.push_back(find_min_steps(a , b));
    }

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}