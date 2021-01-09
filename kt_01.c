#include<stdio.h>
int main(void){
  int a;
  printf("bang cuu chuong");
  for(a=1;a<10;a++){
  printf(" \nbang nhan %d\n",a);
  int b;
  for(b=1;b<10;b++){
  printf("\t%d x %d = %d\n", a, b, a*b);
  }
  }
}
