#include<stdio.h>
int a[10],b[10];
void merge(int lb,int mid,int ub){
    int i = lb;
    int j = mid+1;
    int k = lb;
    while(i<=mid && j<= ub){
        if(a[i]<=a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }  
    }
    if(i>mid){
        while (j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }  
    }
    else
    {
        while (i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }   
    }
}
void mergesort(int lb,int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        printf("mid %d",mid);
        mergesort(lb,mid);
        mergesort(mid+1,ub);
        merge(lb,mid,ub);
    }
}
void main(){
    printf("Enter your elements");
    for(int i = 0; i<10;i++){
        printf("Enter your %d element",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Array you entered");
    for(int i = 0; i<10;i++){
        printf("%d \t",a[i]);
    }
    int start = 0;
    int end = 9;
    mergesort(start,end);
    printf("\n");
    printf("After Sorting");
    for(int i = 0; i<10;i++){
        printf("\t %d \t",a[i]);
    }
}