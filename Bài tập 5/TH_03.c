#include <stdio.h>
 
int main() 
{
    int a, b, c;
    printf("nhap a:\n");
    scanf("%d", &a);
     printf("nhap b:\n");
    scanf("%d", &b);
     printf("nhap c:\n");
    scanf("%d", &c);
    int số = a;
    if(số < b) 
    { số = b; }
    if(số < c) {số = c;}
 
    printf("so lon nhat la %d\n", số);
 
    return 0;
}
