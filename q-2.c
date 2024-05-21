#include <stdio.h>

void sum(int *a, int *b) { 
    
    int c = *a;
    *a = *b;
    *b = c; 
}

int main() {
    
    int x;
    int y;
    
    printf("enter the value of first number: ");
    scanf("%d",&x);

    printf("enter the value of second number: ");
    scanf("%d",&y);
  
    sum(&x, &y); 
  
    printf("%d %d", x, y);
  
    return 0;
}
