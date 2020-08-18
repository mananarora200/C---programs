#include<stdio.h>
void main(){
    printf("Enter values for array");
    int a[10];
    for(int i = 0; i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("\nHere is the sorted array :");
    for(int i = 1;i<10;i++){
        int value = a[i];
        int hole = i;
        while(hole>0&&a[hole-1]>value)
        {
            a[hole] = a[hole-1];
            hole-=1;
        }
        a[hole] = value;
    }
    printf("\n");
    for(int i =0;i<10;i++){
        printf("%d \t",a[i]);
    }

}