#include<stdio.h>
void main(){
    int a[10],elem;
    printf("Enter your elements :");
    for(int i = 0; i<10; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter your element for search :");
    scanf("%d",&elem);
    for(int i = 0; i<10; i++){
        if(a[i]==elem){
            printf("element found at %d",i);
            break;
        }
        else
        {
            continue;
        }
        
    }
}

 