#include <stdio.h>
#include <math.h>

int main(){//khai bao bien
 int a, b, c,d, delta, x1, x2, x;
    //lenh nhap
    printf("nhap a=");scanf("%d",&a);
    printf("nhap b=");scanf("%d",&b);
    printf("nhap c=");scanf("%d",&c);
    //cong thuc delta
    delta=b*b-4*a*c;
    //cac truong hop nghiem cua ptb2
    if (delta<0){
      printf("phuong trinh vo nghiem");}
    else if(delta==0){
      x1=b/(2*a*c) ;
      printf("phuong trinh co nghiep kep");}
     else {
     x1=(-b+sqrt(d)/2*a*c);
     x2=(-b-sqrt(d)/2*a*c);
    printf("\nPhuong trinh co 2 nghiem\nx1= %0.d\nx2= %0.d",x1, x2);
     }
  return 0;
}
