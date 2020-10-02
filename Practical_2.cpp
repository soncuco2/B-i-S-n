#include<stdio.h>
int main(){
	int sum;
	float laisuat;
	int year;
	printf("Nhap vao so tien : ");
	scanf("%d", &sum);
	printf("\nNhap vao phan tram lai suat : ");
	scanf("%f", &laisuat);
	printf("\nNhap vao so nam gui tien : ");
	scanf("%d", &year);
	
	float tienlai = (sum*laisuat)/100;
	float tong = sum + tienlai;
	for(int i = 1 ; i <= year; i++){
		printf("\nso tien lai nam thu %d la : %f", year, tienlai);
		printf("\nso tien lai va tien von sau %d nam la : %f",year,tong);
	}
}
