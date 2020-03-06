#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num , inp;
    cin>>num;

    vector <int>robo;
    vector <int>bion;

    int ctr_1 = 0 , ctr_2 = 0;
    for(int i = 0; i<num; i++){
        cin>>inp;
        robo.push_back(inp);
    }

    for(int i = 0; i<num; i++){
        cin>>inp;
        bion.push_back(inp);
    }

    for(int i = 0; i<num; i++){
        if(robo[i]>bion[i]){
            ctr_1++;
        }else if(robo[i]<bion[i]){
            ctr_2++;
        }
    }
    int ans;
    if(ctr_1!=0 && ctr_2!=0){
        ans = (ctr_2)/(ctr_1) + 1;
    }
    else if(ctr_1==0 && ctr_2!=0){
        ans = -1;
    }
    else if(ctr_2==0 && ctr_1!=0){
        ans = 1;
    }else{
        ans = -1;
    }
    cout<<ans;
    return 0;
}