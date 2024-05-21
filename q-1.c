// Online C compiler to run C program online
#include <stdio.h>

void add(int *arr){
    for(int n=0; n<5; n++){
        arr[n] = arr[n] * arr[n];
    }
}
int main() {
    int arr[5];
    
    for(int x=0; x<5; x++){
        printf("arr[%d]=",x);
        scanf("%d",&arr[x]);
    }
    
    add(arr);
    
    for(int i=0; i<5; i++){
        printf("% d",arr[i]);
    }

    return 0;
}