#include<stdio.h>

int main(){
	int number;
   printf("moi nhap so nguyen: ");
   scanf("%d,", &number);
   
   if (number%2==0){
   	 printf("day la so chan");
   }else{ printf("day la so le");
   }

   return 0;
}

