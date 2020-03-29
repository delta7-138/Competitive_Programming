#include <iostream>
#include <vector>
using namespace std;

long long give_min_op(long long a , long long b){
    if(a%b==0){
        return 0;
    }
    return (b - a%b);
}

int main(){
    int t;
    cin>>t;

    vector <long long>ans;
    
    long long a , b;
    for(int i = 0; i<t; i++){
        cin>>a>>b;

        ans.push_back(give_min_op(a , b));
    }

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}