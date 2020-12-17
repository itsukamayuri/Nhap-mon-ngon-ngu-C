#include<stdio.h>
int main(void){
  int a,b ;
  //khai bao so luong //
  printf("nhap so luong");
  //nhap gia tri//
  scanf("%d",&a);
  //khai bao don gia //
   printf("nhap don gia");
   //nhap gia tri b//
   scanf("%d",&b);
   //khai bao bien//
   int soluong, dongia, thanhtien;
   //cong thuc tinh//
   thanhtien = a * b;
   //hien thi thanh tien ra man hinh//
   if(a>=5&b>=500){thanhtien=(a*b)*0.5;}
   printf("thanhtien=%d",thanhtien);
  
  return 0;}
