#include<stdio.h>
int main(void){
  int a,b ;
  //khai bao so luong //
  printf("nhap so luong");
  //nhap gia tria//
  scanf("%d",&a);
  //khai bao don gia //
  printf("nhap don gia");
  //nhap gia tri b//
  scanf("%d",&b);
  //khai bao bien//
  int khoiluong, giatri, thanhtien;
  //cong thuc tinh//
  thanhtien = a * b;
  //hien thi a*b ra man hinh//
  printf("a * b = %d",thanhtien);
return 0;
}
