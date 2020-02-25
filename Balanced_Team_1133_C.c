#include <stdio.h>
#include <stdlib.h>
#define LARGE 300010
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
int merge_sort(long long arr[] , int l , int u){
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
    scanf("%d" , &n);

    for(int i = 0; i<n; i++){
        scanf("%d" , &arr_inp[i]);
    }

    merge_sort(arr_inp , 0 , n-1);
    
    
    for(int i = 0; i<n; i++){
        printf("%d\n" , arr_inp[i]);
    }
    int left_point = 0 , right_point = n-1;

    int ans = 0;
    while(left_point<=right_point){
        if(arr_inp[right_point] - arr_inp[left_point]>5){
            right_point = right_point - 1;
        }else{
            ans = right_point - left_point + 1;
            break;
        }
    }
    printf("%d" , ans);
    return 0;
}