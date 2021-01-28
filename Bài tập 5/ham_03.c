//Khoi khai bao
#include<stdio.h>
  int n;
  int Nhap_pt_mang (int a[]);
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
// khoi dinh nghia ham
  int Nhap_pt_mang (int a[]){

  for(int i = 0;i < n;i++){
printf("a[%d]=",i);
scanf("%d",&a[i]);}
return 0;
}
 int Hien_thi_pt_mang(int a[]){
   for(int i=0;i<n;i++){
     printf("%d\n",a[i]);}
     return 0;}
 int Hien_thi_tong_chan(int a[]){
 int chan,le;
for(int i = 0; i < n; i++){ 
 if(a[i] % 2 == 0 && a[i] != 0){
 chan = chan + a[i];        
 printf("\ntong so chan trong a : %d ",chan );
 }}    
  return 0;}
  int Dem_chan_le_0(int a[]){
  int demchan,demle;  
  for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0 && a[i] != 0)
        demchan = demchan + 1;
      }
      for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0)
            demle = demle + 1;
          }
      printf("\n cac so chan trong a : %d ", demchan);
      printf("\n cac so le trong a : %d ", demle);
  return 0;
}
