#include	<stdio.h>

int main()
{
	//khai bao bien DT,CV va R kieu double
	double  DT,CV,R;
	//khai bao ten PI kieu double
	double PI=3.14;
	//tinh chu vi ,dien tich hinh  tron
	  R=1.5;
     
    CV =2*R*PI;
    DT =R*R*PI;
    printf(" nhap ban kinh r=5\n");
    printf ( "CV hinh tron la: %0.1f", CV);
    printf ("DT hinh tron la:%0.1f" , DT);
	return 0;		
}
