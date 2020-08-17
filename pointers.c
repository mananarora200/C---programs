#include<stdio.h>
void main(){
    printf("Enter your number :");
    int a;
    int *d = &a;
    scanf("%d",&a);
    printf("Value in a: %d \n",a);
    printf("Addr in a: %p \n",&a);
    printf("Addr in d: %p \n",d);
    printf("Addr in d: %p \n",&d);
    printf("Value in pointer: %d \n",*d);
}