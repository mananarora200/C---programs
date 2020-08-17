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
    printf("\n");
    for(int i = 0;i<10;i++){
        for(int j = 0;j<9;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nSorted Array is :\n");
    for(int i =  0; i<10; i++){
        printf("%d \t",a[i]);
    }
}
