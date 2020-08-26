#include<stdio.h>
void quicksort(int start,int end);
int partition(int start,int end);
int a[5];  
void main(){
    printf("Enter your elements");
    for(int i = 0; i<5;i++){
        printf("Enter your %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Array you entered");
    for(int i = 0; i<5;i++){
        printf("%d \t",a[i]);
    }
    int start = 0;
    int end = 5;
    quicksort(start,end);
    printf("\n");
    printf("After Sorting");
    for(int i = 0; i<5;i++){
        printf("\t %d \t",a[i]);
    }
}
void quicksort(int start,int end){
    int pivot;
    if(start<end){
        pivot = partition(start,end);
        quicksort(start,pivot);
        quicksort(pivot+1,end);
    }
}
int partition(int start,int end){
    int pivot = a[start];
    int i = start;
    int j = end;
    while (i<j)
    {
    do
    {
        i++;
    } while (a[i]<=pivot);
    do
    {
        j--;
    } while (a[j]>pivot);
    if(i<j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    }
    }
    
    int temp2 = a[start];
    a[start] = a[j];
    a[j] = temp2;
    return j;
}
