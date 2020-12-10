#include <stdio.h>

int main(void) {
  int a ;
  printf("nhap a=");
  scanf("%d",&a);
  //kiem tra a la duong hay am
  if(a > 0 ){
 printf(" %d la so duong",a);
  }
  // neu a=0 
  else if (a == 0){
 printf("a = 0  ");
  }
  // neu a la so am
  else{
    printf("%d la so am",a);
  }

  return 0;
}

