#include <stdio.h>
#include <stdlib.h>
#define LARGE 1000

int in_arr_or_not(long arr_inp[] ,int size ,  long num){
    int i;
    for(i = 0 ; i<size ;i++){
        if(arr_inp[i]==num)
            break;
    }
    if(i==size)
        return 0;
    return 1;
}

long num_staricases(long n , long curr_in , long k){
    int ctr = 0;
    long out_of_order[LARGE] = {0};

    //long left_sub[LARGE] = {0};
    //long right_sub[LARGE] = {0};

    int index = 0;
    for(int i = 0; i<k; i++){
        scanf("%d" , &out_of_order[i]);
        if(out_of_order[i]==curr_in){
            ctr++;
            index = i;
            printf("Helo");
        }//printf("%d " , out_of_order[i]);
    }
    //printf("%d\n" , curr_in);
    //printf("%d\n" , ctr);
    if(ctr==0){
        //printf("hi");
        return 0;
    }

    int low = index , upp = k, mid;
    while(low<=upp){
        mid = (low + upp)/2;
        if((out_of_order[mid]-out_of_order[mid-1]==1) && (out_of_order[mid+1] - out_of_order[mid]==1)){
            low = mid + 1;
        }else{
            upp = mid - 1;
        }
    }
    long diff_1 = 0;
    if(low==index){
        low = low + 1;
    }
    if(out_of_order[low-1] - out_of_order[low]==1 && out_of_order[low+1] - out_of_order[low]==1){
        diff_1 = out_of_order[low] + 2 - out_of_order[index]; 
    }else{
        diff_1 = out_of_order[low] + 1 - out_of_order[index];
    }

    long diff_2 = 0;
    low = 0 , upp = index;
    while(low<=upp){
        mid = (low + upp)/2;
        if(out_of_order[mid]-out_of_order[mid-1]==1 && out_of_order[mid+1] - out_of_order[mid]==1){
            upp = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    if(upp==index){
        upp = upp-1;
    }
    if(out_of_order[upp-1] - out_of_order[upp]==1 && out_of_order[upp+1]-out_of_order[mid]==1){
        diff_2 = out_of_order[index] - out_of_order[upp] - 2;
    }else{
        diff_2 = out_of_order[index] - out_of_order[upp] - 1;
    }

    if(diff_1>diff_2)
        return diff_2;
    return diff_1;

}

int main(){
    int t;
    long n , k , curr_in;
    scanf("%d" , &t);

    long ans[LARGE] = {0};
    for(int i = 0 ; i<t; i++){
        scanf("%ld" , &n);
        scanf("%ld" , &curr_in);
        scanf("%ld" , &k);

        ans[i] = num_staricases(n , curr_in , k);
    }

    for(int i = 0; i<t; i++){
        printf("%d\n" , ans[i]);
    }
    return 0;
}