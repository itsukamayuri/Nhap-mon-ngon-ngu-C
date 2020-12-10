#include <stdio.h>

int main(void) {
  int n ;
  printf("nhap n=");
  scanf("%d",&n);
  //kiem tra n la chan hay le
  if(n %2==0){
  // neu n chia het cho 2  
printf("%d la so chan",n);}
else if (n==0){
printf("n = 0");}
 // neu n khong chia het cho 2

else {printf("%d la so le",n);}
  

  return 0;
}
