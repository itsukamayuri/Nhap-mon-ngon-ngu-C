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
    //neu so luong lon hon5 va don gia lon hon 500//
    if(a>=5){thanhtien=(a*b)*0.5;
     a=5;}
     if(b>=500){
    b=500;
    printf("thanhtien=%d",thanhtien);}
  
  return 0;}
