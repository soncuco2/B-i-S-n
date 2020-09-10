#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b, c ;
	
	printf("nhap vao gia tri a = ", a);
	scanf("%d", &a);
	
	printf("nhap vao gia tri b = ", b);
	scanf("%d", &b);
	
	printf("nhap vao gia tri c = ", c);
	scanf("%d", &c);
	
	int max = a ;
	
	if(b > max){
		max = b;
	}
	
	if(c > max){
		max = c;
		return max;
	}printf("max = %d", max);
	
}
