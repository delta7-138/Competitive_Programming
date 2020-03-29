#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n1 , n2;
    cin>>n1;

    vector <int>arr_1;
    
    int inp;
    for(int i = 0; i<n1; i++){
        cin>>inp;
        arr_1.push_back(inp);
    }
    
    cin>>n2;
    vector <int>arr_2;

    for(int i = 0; i<n2; i++){
        cin>>inp;
        arr_2.push_back(inp);
    }
    int max_1 = arr_1[0];
    int max_2 = arr_2[0];

    for(int i = 1; i<n1; i++){
        if(max_1<arr_1[i]){
            max_1 = arr_1[i];
        }
    }

    for(int i = 1; i<n2; i++){
        if(max_2<arr_2[i]){
            max_2 = arr_2[i];
        }
    }

    cout<<max_1<<" "<<max_2;
    return 0;
}