#include <iostream>
#include <vector>
using namespace std;

int give_max_marks(vector <int>marks , int n , int m){
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum = sum + marks[i];
    }

    if(sum<=m){
        return sum;
    }else{
        return m;
    }
}
int main(){
    int t;
    cin>>t;

    int n , m, inp;
    vector <int>ans;

    for(int i = 0; i<t; i++){
        cin>>n>>m;
        vector <int>arr_inp;
        for(int i = 0; i<n; i++){
            cin>>inp;
            arr_inp.push_back(inp);
        }
        ans.push_back(give_max_marks(arr_inp , n , m));
    }

    for(int i = 0; i<t; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}