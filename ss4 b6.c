#include<stdio.h>

int main(){
	
    float chiSoMoi, chiSoCu;
printf("moi nhap chi so cu: ");
scanf("%d", &chiSoCu);

printf("moi nhap chi so moi: ");
scanf("%d", &chiSoMoi);

int soDien = chiSoMoi-chiSoCu;

float tienDien;

 if (chiSoCu>chiSoMoi){
 	printf("chi so moi phai lon hon chi so cu");
 }else if (0<=soDien && soDien<50){
 	tienDien=soDien*10.000;
 	printf("Tien dien trong thang la: %.3f VND",tienDien);
 }else if (50<=soDien && soDien<100){
 	tienDien=soDien*15.000;
 	printf("Tien dien trong thang la: %.3f VND",tienDien);
 }else if (100<=soDien && soDien<150){
 	tienDien=soDien*20.000;
 	printf("Tien dien trong thang la: %.3f VND",tienDien);
 }else if (150<=soDien && soDien<200){
 	tienDien=soDien*25.000;
 	printf("Tien dien trong thang la: %.3f VND",tienDien);
 }else{
 	tienDien=soDien*30.000;
 	printf("Tien dien trong thang la: %.3f VND",tienDien);
 
 }



   return 0;
}

