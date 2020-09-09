#include<stdio.h>
#include<math.h>
int main(){
	
	double a, b, c;
	double p = (1/2)*(a+b+c);
	printf("Nhap vao canh a = ");
	scanf("%f", a);
	
	printf("Nhap vao canh b = ");
	scanf("%f", b);
	
	printf("Nhap vao canh c = ");
	scanf("%f", c);
	
	if((a + b >c) || (a + c > b) || (b + c > a)){
		printf("Chu vi cua tam giac = ",a + b + c);
		printf("dien tich cua tam giac = ", sqrt(p*(p-a)*(p-b)*(p-c)));
	} else {
		printf("Tam giac khong ton tai");
	}
		
}
