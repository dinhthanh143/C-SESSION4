#include<stdio.h>

int main(){
	int day,month,year;
	printf("moi nhap ngay: ");
	scanf("%d", &day);
	
	printf("moi nhap thang: ");
	scanf("%d", &month);
	
	printf("moi nhap year: ");
	scanf("%d", &year);
	
	if (day<1 || day>31 || month<1 || month >12 || month==2&&day>29 || month==4&&day>30 || month==6&&day>30 || month==9&&day>30 || month==11&&day>30 ){
		printf("khong hop le");
	}else{printf("%d/%d/%d hop le", day,month,year);
	} 
	

   return 0;
}

