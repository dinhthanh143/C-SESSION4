#include<stdio.h>

int main(){
	
	int a,b,c;
	
printf("moi nhap 3 so nguyen: ");
scanf("%d %d %d", &a,&b,&c);

if (a<b && b<c && a<c){
	printf("%d %d %d", a,b,c);
}else if(a<b && b>c && a<c){
	printf("%d %d %d", a,c,b);
}else if(b<a && a<c && b<c){
	printf("%d %d %d", b,a,c);
}else if(b<a && a>c && b<c){
	printf("%d %d %d", b,c,a);
}else if(c<a && a<b && c<b){
	printf("%d %d %d", c,a,b);
}else if(c<a && a>b && c<b){
	printf("%d %d %d", c,b,a);
}

   return 0;
}

