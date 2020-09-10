#include<stdio.h>

int main(){
	
	int weekdays ;
	printf("Nhap vao so nguyen : ");
	scanf("%d", &weekdays);
	
	if(weekdays >= 2 && weekdays <= 7){
		printf("day la thu : %d" , weekdays);
	}else if(weekdays == 8){
		printf("day la chu nhat");
	}else{
		printf("khong phai ngay trong tuan");
	}
}
