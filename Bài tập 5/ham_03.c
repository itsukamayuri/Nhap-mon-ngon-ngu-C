// khoi dinh nghia ham
#include<stdio.h>

int n;
int Nhap_pt_mang(int a[]);
int Hien_thi_pt_mang(int a[]);
int Hien_thi_tong_chan(int a[]);
int Dem_chan_le_0(int a[]);

 //khoi ham main
int main(){
  
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
int Nhap_pt_mang(int a[]){
  for(int i = 0; i < n; i++){
    printf("a[%d] = ",i);scanf("%d",&a[i]);
  }
  return 0;
}
int Hien_thi_pt_mang(int a[]){
  return 0;
}
int Hien_thi_tong_chan(int a[]){
  return 0;
}
int Dem_chan_le_0(int a[]){
  return 0;
