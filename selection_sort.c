#include<stdio.h>
void main(){
    int a[10];
    printf("Enter your elements :");
    for(int i = 0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("The Array is :\n");
    for(int i =  0; i<10; i++){
        printf("%d \t",a[i]);
    }
    
    for(int j = 10;j>0;j--){
    int temp = 0;
        for(int i=0;i<j;i++){
            if(a[i]>temp){
                temp = a[i];
            }
        }
        for(int i =0;i<j;i++){
            if(a[i] == temp){
                a[i] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    printf("\nSorted Array is :\n");
    for(int i =  0; i<10; i++){
        printf("%d \t",a[i]);
    }
    printf("\n\n");
}
