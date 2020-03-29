#include <iostream>
using namespace std;

int main(){
    int x , y , z;
    cin>>x>>y>>z;

    if(x + z - y>0 && x -z - y>0){
        cout<<"+";
    }else if(x + z - y<0 && x - z - y<0){
        cout<<"-";
    }else if(x + z - y==0 && x-z-y==0){
        cout<<"0";    
    }else{
        cout<<"?";
    }
    return 0;
}