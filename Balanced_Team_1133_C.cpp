#include <iostream>
#include <vector>
#define LARGE 300010
using namespace std;

long long arr_ans[LARGE];
void merge(long long arr[] , int l , int u, int mid){
    int start = l , end = mid + 1, p = 0;
    
    while(start<=mid && end<=u){
        if(arr[start]<=arr[end]){
            arr_ans[p] = arr[start];
            start++; 
            p++;
        }else{
            arr_ans[p] = arr[end];
            end++;
            p++;
        }
    }

    while(start<=mid){
        arr_ans[p] = arr[start];
        start++;
        p++;
    }
    while(end<=u){
        arr_ans[p] = arr[end];
        end++;
        p++;
    }

    p = 0;
    start = l;

    while(start<=u){
        arr[start] = arr_ans[p];
        start++;
        p++;
    }

    // for(int i = 0; i<6; i++){
    //     printf("%d " , arr_ans[i]);
    // }printf("\n");
}
void merge_sort(long long arr[] , int l , int u){
    if(l<u){
        int mid = (l + u)/2;

        merge_sort(arr , l , mid);
        merge_sort(arr , mid + 1 , u);

        merge(arr , l , u , mid);
    }
}
int main(){
    long long arr_inp[LARGE];
    int n;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>arr_inp[i];
    }

    merge_sort(arr_inp , 0 , n-1);

    vector <long long>arr_non_rep;
    int arr_count_entries[LARGE];

    arr_non_rep.push_back(arr_inp[0]);
    for(int i = 1; i<n; i++){
        if(arr_inp[i]!=arr_non_rep[arr_non_rep.size() - 1]){
            arr_non_rep.push_back(arr_inp[i]);
            arr_count_entries[arr_non_rep.size()-1] = 1;
        }else{
            arr_count_entries[arr_non_rep.size() - 1]++;
        }
    }
    arr_count_entries[0]++;
    // for(int i = 0; i<arr_non_rep.size(); i++){
    //     cout<<arr_non_rep[i]<<" ";
    // }cout<<endl;

    // for(int i = 0; i<arr_non_rep.size(); i++){
    //     cout<<arr_count_entries[i]<<" ";
    // }cout<<endl;

    int left_point_1 = 0 , right_point_1 = arr_non_rep.size()-1;
    while(left_point_1<=right_point_1){
        if(arr_non_rep[right_point_1] - arr_non_rep[left_point_1]>5){
            right_point_1 = right_point_1 - 1;
        }else{
            break;
        }
    }
    int left_point_2 = 0 , right_point_2 = arr_non_rep.size() -1;
    while(left_point_2<=right_point_2){
        if(arr_non_rep[right_point_2] - arr_non_rep[left_point_2]>5){
            left_point_2 = left_point_1 + 1;
        }else{
            break;
        }
    }
    long long sum_1 = 0 , sum_2 = 0;
    for(int i = left_point_1; i<=right_point_1; i++){
        sum_1 = sum_1 + arr_count_entries[i];
    }
    for(int i = left_point_2; i<=right_point_2; i++){
        sum_2 = sum_2 + arr_count_entries[i];
    }

    if(sum_1>sum_2){
        cout<<sum_1;
    }else{
        cout<<sum_2;
    }

    return 0;
}
