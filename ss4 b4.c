#include<stdio.h>

int main(){
	int month;
	printf("moi nhap thang(1-12): ");
	scanf("%d", &month);
	
	if (month<1 || month>12){
		printf("thang khong hop le");
	}else if (month ==2){
		printf("thang nay co 28 ngay");
	}else if (month==4 || month == 6 || month==9 ||month==11){
		printf("thang nay co 30 ngay");
	}else{
		printf("thang nay co 31 ngay");
	}
	
	
	

   return 0;
}

