#include <stdio.h>
int main(){
	int i=0;
	//khai bao mang
int marks[4]={3,5,7,2};
// thuc hien vong lap
for(i=0;i<4;i++)
{//hien thi mang
	printf("%d\n",marks[i]);
}
int tong=0;
for(i=0;i<4;i++){
// cong thuc
tong= tong + marks[i];
// hien thi ket qua ra man hinh
printf("tong=%d",tong);}
return 0;
}
