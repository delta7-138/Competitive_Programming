#include <iostream>
#include <vector>
using namespace std;

int give_max_area(int a , int b , int x , int y){
    int area[] = {0 , 0 , 0 , 0};
    area[0] = a * y;
    area[1] = a * (b - y - 1);
    area[2] = b * (a - x - 1);
    area[3] = b * x;

    int max = area[0];
    for(int i = 1; i<4; i++){
        if(max<area[i]){
            max = area[i];
        }
    } 
    return max;
}

int main(){
    int t;
    cin>>t;

    vector <int>ans;
    int a, b , x , y;
    for(int i = 0; i<t; i++){
        cin>>a>>b>>x>>y;
        ans.push_back(give_max_area(a , b , x , y));
    }

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}