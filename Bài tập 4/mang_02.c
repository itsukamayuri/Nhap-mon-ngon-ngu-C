#include <stdio.h>
int main(){
//khai bao bien
  int n,i;
  int a[100];
//nhap phan tu
  printf("nhap so phan tu a:\n");
  scanf("%d",&n);
//vong lap
  for (i=0; i<n ;i++){
     printf("nhap phan tu n :\n");
   scanf("%d",&a[i]);
  }
//khai bao bien tong
  int tong=0;
// khai bao vong lap
  for (i=0;i<n;i++){
//cong thuc
    tong=tong+a[i];
//hien thi ket qua
    printf("tong = %d\n",tong);}
return 0;
}
