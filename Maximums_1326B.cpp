#include <iostream>
#include <vector>
#define LARGE 200000
using namespace std;
int main(){
    int n , inp;
    cin>>n;

    vector <int>b_arr;
    for(int i = 0; i<n; i++){
        cin>>inp;
        b_arr.push_back(inp);
    }

    int a_arr[LARGE];
    int max;
    a_arr[1] = b_arr[0];
    max = a_arr[1];
    a_arr[2] = a_arr[1] + b_arr[1];

    if(max<a_arr[2]){
        max = a_arr[2];
    }

    for(int i = 3; i<=n; i++){
        a_arr[i] = max + b_arr[i-1];
        if(max<a_arr[i]){
            max = a_arr[i];
        }
    }

    for(int i = 1; i<=n; i++){
        cout<<a_arr[i]<<" ";
    }
    return 0;
}