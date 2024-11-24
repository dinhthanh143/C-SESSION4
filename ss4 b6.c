#include<stdio.h>

int main(){
	
    float ChiSoMoi, ChiSoCu;
printf("moi nhap chi so cu: ");
scanf("%d", &ChiSoCu);

printf("moi nhap chi so moi: ");
scanf("%d", &ChiSoMoi);

int SoDien = ChiSoMoi-ChiSoCu;

float TienDien;

 if (ChiSoCu>ChiSoMoi){
 	printf("chi so moi phai lon hon chi so cu");
 }else if (0<=SoDien && SoDien<50){
 	TienDien=SoDien*10.000;
 	printf("Tien dien trong thang la: %.3f VND",TienDien);
 }else if (50<=SoDien && SoDien<100){
 	TienDien=SoDien*15.000;
 	printf("Tien dien trong thang la: %.3f VND",TienDien);
 }else if (100<=SoDien && SoDien<150){
 	TienDien=SoDien*20.000;
 	printf("Tien dien trong thang la: %.3f VND",TienDien);
 }else if (150<=SoDien && SoDien<200){
 	TienDien=SoDien*25.000;
 	printf("Tien dien trong thang la: %.3f VND",TienDien);
 }else{
 	TienDien=SoDien*30.000;
 	printf("Tien dien trong thang la: %.3f VND",TienDien);
 
 }



   return 0;
}

