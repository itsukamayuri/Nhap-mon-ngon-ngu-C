#include <stdio.h>
int main(){
  int n,i;
  int a[100];
  printf("nhap so phan tu a:\n");
  scanf("%d",&n);
  for (i=0; i<n ;i++){
     printf("nhap phan tu n :\n");
   scanf("%d",&a[i]);
  }
  int tong=0;
  for (i=0;i<n;i++){
    tong=tong+a[i];
    printf("tong = %d\n",tong);
  }
  
return 0;
}

