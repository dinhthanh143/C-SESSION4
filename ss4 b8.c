#include<stdio.h>

int main(){
	
	int a,b,c;
	
printf("moi nhap 3 canh cua tam giac:");
scanf("%d %d %d", &a, &b, &c);

if (a+b>c && a+c>b && b+c>a){
	printf("la ba canh tam giac");
}else{printf("khong phai ba canh tam giac");
}

   return 0;
}

