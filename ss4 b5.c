#include<stdio.h>

int main(){
	
	int first_num, second_num, third_num;
	printf("moi nhap so nguyen thu nhat: ");
	scanf("%d", &first_num);
	
    	printf("moi nhap so nguyen thu hai: ");
	scanf("%d", &second_num);
	
		printf("moi nhap so nguyen thu ba: ");
	scanf("%d", &third_num);
	
	if (third_num>first_num && third_num<second_num || third_num<first_num && third_num>second_num ){
		printf("so thu ba co nam trong khoang giua so thu hai va thu nhat");
	}else{printf("so thu ba khong nam trong khoang giua so thu hai va thu nhat");
	}
	
	

   return 0;
}

