#include<stdio.h>
int main(void){
  // khai bao bien
  int n=123;
  int s=0;
  // hien thi va nhap
  printf("nhap n\t");
  scanf("%d",&n);
  // khai bao vong lap
    for(int i=1;n>0;i++){
    	//khai bao bien
      int so=n%10;
      n=n/10;
      s=s+so;
      //hien thi
      printf("s=%d",s);
    }
  
  return 0;
}
