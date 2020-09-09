#include <stdio.h>
#include <math.h>
	int main(){
		
		int  a , b , c ;
		int delta = ((b*b)-(4*a*c));
		int x1 , x2 ;
		
		printf("Nhap vao a = ");
		scanf("%d" , &a );
		
		printf("Nhap vao b = ");
		scanf("%d" , &b );
		
		printf("Nhap vao c = ");
		scanf("%d" , &c );
		
		if(delta > 0){
			x1 = (float)((-b + sqrt(delta)) / (2*a));
			x2 = (float)((-b - sqrt(delta)) / (2*a));
			printf("phuong trinh  co 2 nghiem : x1 = %f va x2 = %f", x1 , x2);
		} else if (delta == 0){
			x1 = ( -b / (2 * a));
			printf("phuong trinh co nghiem kep la : x1 = x2 = %f", x1);
		} else {
			printf ("phung trinh vo nghiem");
		}
		
}
	
