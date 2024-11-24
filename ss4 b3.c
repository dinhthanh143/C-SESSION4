#include<stdio.h>

int main(){
	int number;
   printf("moi nhap so nguyen: ");
   scanf("%d,", &number);
   
   if (number%3==0 && number%5==0){
   	printf("so nay chia het cho ca 3 lan 5");
   }else if (number%3==0){
   	printf("so nay chia het cho 3");
   }else if (number%5==0){
   	printf("so nay chia het cho 5");
   }
   
   
   
   
	
	
	
	
	
	

   return 0;
}

