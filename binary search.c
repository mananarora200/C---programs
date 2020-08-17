#include<stdio.h>
void main(){
    int a[10];
    printf("Enter 10 numbers :");
    printf("\n");
    for(int i=0;i<10;i++){
        printf("Enter your %d element :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Here are your elements :");
    for(int i=0;i<10;i++){
        printf("%d \t",a[i]);
    }
    for(int i = 0;i<10;i++){
        for(int j = 0;j<9;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int f,l,mid,elm;
    f = 0;
    l = 9;
    mid = (f+l)/2;
    int flag = 0;
    printf("\n");
    printf("Enter your element for search :");
    scanf("%d",&elm);
    while (mid<=l)
    {
        if(a[mid] == elm){
            flag = 1;
            break;
        }
        else if(elm < a[mid]){
            l = mid;
            mid = (f+l)/2;
        }
        else{
            f = mid;
            mid = (f+l)/2;
        }
    }
    if(flag == 1){
        printf("Element found at %d",mid);
    }
    else{
        printf("Element not found");
    }
}