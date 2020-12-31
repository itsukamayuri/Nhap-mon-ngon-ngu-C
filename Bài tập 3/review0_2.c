#include <stdio.h>
int main()
{
int a,b,i;
// lenh nhap
scanf("%d\n%d", &a, &b);
// khai bao chuoi
char *str[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//khai bao vong lap
for(i=a;i<=b;i++)
{
if(i>9)
{
if(i%2==0)
printf("even\n");
else
printf("odd\n");
}
else
{
printf("%s\n",str[i]);
}
}
return 0;
}
