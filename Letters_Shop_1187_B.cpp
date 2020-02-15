#include <iostream>
#include <vector>
#include <string>
#define LARGE 200010
using namespace std;

vector<char> reserve(LARGE , 0);
void merge(string str , int l , int u , int mid){
    int start = l , end = mid + 1, p = 0;
    
    while(start<=mid && end<=u){
        if(str[start]<=str[end]){
            reserve[p] = str[start];
            start++; 
            p++;
        }else{
            reserve[p] = str[end];
            end++;
            p++;
        }
    }

    while(start<=mid){
        reserve[p] = str[start];
        start++;
        p++;
    }
    while(end<=u){
        reserve[p] = str[end];
        end++;
        p++;
    }

    p = 0;
    start = l;

    while(start<=u){
        str[start] = reserve[p];
        start++;
        p++;
    }

    // for(int i = 0; i<6; i++){
    //     printf("%c " , arr_ans[i]);
    // }printf("\n");
}
void merge_sort(string str , int l , int u){
    if(l<u){
        int mid = (l + u)/2;

        merge_sort(str , l , mid);
        merge_sort(str , mid + 1 , u);

        merge(str , l , u , mid);
    }
}
int main(){
    int length; 
    cin>>length;

    string str_inp, inp;
    cin>>str_inp;

    merge_sort(str_inp , 0 , length - 1);

    
    //int m;
    //cin>>m;

    //vector <string>names;
    //for(int i = 0; i<m; i++){
    //    cin>>inp;
    //    names.push_back(inp);
    //}
}