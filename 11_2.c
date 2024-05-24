#include<stdio.h>

void reverse(int *arr,int size){

    printf("Your revers string is\n");

  for(int i = size-1;i>=0;i--){
  printf("%d\n",*(arr + i));
  }
}
int main(){

int size;

printf("Enter your size = ");
scanf("%d",&size);

 int arr[size];
     
    for(int i=0;i<size;i++) {
        printf("enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }   
    
    reverse(arr,size);

}