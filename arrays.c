#include<stdio.h>
int sum();
void main(){
    int a[10];
    printf("enter values in array :");
    for(int i = 0; i<10;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<10;i++){
        printf("\n %d",a[9-i]);
    }
      int sum_arr;
      sum_arr = sum(a);
      printf("\n\nThe sum of array is %d \n\n",sum_arr);
 }
  int sum(int a[10]){
      int sum = 0;
      for (int i = 0;i<10;i++){
          sum = sum + a[i];
      }
      return(sum);
  }
