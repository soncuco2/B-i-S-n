#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c;
	printf("Nhap vao canh a = ");
	scanf("%f", a);
	
	printf("Nhap vao canh b = ");
	scanf("%f", b);
	
	printf("Nhap vao canh c = ");
	scanf("%f", c);
	
	if((a + b <= c) || (a + c <= b) || (b + c <= a)){
		printf("Tam giac khong ton tai");
	}else{
			if((a + b >c) || (a + c > b) || (b + c > a)){
		if((a == b) || (a == c) || (c == b) ){
			printf("chu vi tam giac can abc = ", a+b+c);
			printf("dien tich tam giac can abc = "  );
		}	
		
	else if((a == b) && (a == c) && (b == c)){
			printf("chu vi tam giac deu abc = ", a*3);
			printf("dien tich tam giac deu abc = ", a*a*(sqrt(3)/4));
			
		if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
			printf("chu vi tam giac vuong can abc la = " , 2*a+c);
			printf("dien tich tam giac vuong can abc la = ", 1/2*(a*a));
			
		}
		}else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
			printf("chu vi tam giac vuong abc = ", a + b + c );
			printf("dien tich tam giac vuong abc = ",(a*b)/2 );
			
			}
		}
	}
	
	

}
