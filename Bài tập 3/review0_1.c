#include <stdio.h>

int main(void) {
  int n;
  // nhap   scan
  printf("nhap n=");
  scanf("%d",&n);
   // trong khoang 1<=n<=9
   //neu n=1,... thi hien thi one,...
   if (n == 1) {
     printf("one");}
   else if (n == 2) {	
    printf("two");}
   else if (n == 3 ){
    printf("three");}
   else if (n == 4){
    printf("four");}
   else if ( n==5 ){
    printf("five");}
   else if ( n==6 ){
    printf("six");}
   else if ( n==7 ){
    printf("seven");}
   else if ( n==8 ){
    printf("eight");}
   else if ( n==9 ){
    printf("nine");}
    else{
    //neu nam ngoai khoan tu 1->9 thi hien thi gia tri lon hon 9	
    printf("Greater than 9");}
     
   return 0;
}
