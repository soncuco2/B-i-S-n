#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b;
	
	printf("Nhap vao so nguyen a : ");
	scanf("%d", &a);
	
	printf("Nhap vao so nguyen b : ");
	scanf("%d", &b);
	
	if(a >= b){
		if(b == 0){
			printf("gia tri vua nhap khong hop le");
		}
		printf("%d", a/b);
	}else if(a <= b){
		printf("%d", a*b);
	}
	
}
