#include<stdio.h>
#include<math.h>
int main(){
	
	int month;
	printf("Nhap vao mot thang : ");
	scanf("%d", &month);
	
	int day ;
	printf("Nhap vao mot ngay : ");
	scanf("%d", &day);
	int dem;
	
	if( month <= 12 && month > 0 &&  day <= 31 && day> 0){

	if(month == 1){
	    dem = day;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 2 && day <= 28){
	    dem = day + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 3){
	    dem = day + 31 +28;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 4){
	    dem = day + 31 + 31 +28;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 5){
	    dem = day + 31 + 28 + 31+ 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 6){
	    dem = day + 31 + 28 + 31+ 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 7){
	    dem = day + 31 + 28 + 31+ 30 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 8){
	    dem = day + 31 + 28 + 31+ 30 + 31 + 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 9){
	    dem = day + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 10){
	    dem = day + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 11){
	    dem = day + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30 + 31;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);

	}
	if(month == 12){
	     dem = day + 31 + 28 + 31+ 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		printf("ngay thang vua nhap la ngay thu : %d" , dem);
	}
	
	if(dem % 7 == 0){
		printf("\nday la ngay CN");
		}
	if(dem % 7 == 1){
		printf("\nday la ngay thu 2");
		}
	if(dem % 7 == 2){
		printf("\nday la ngay thu 3");
		}
	if(dem % 7 == 3){
		printf("\nday la ngay thu 4");
		}
	if(dem % 7 == 4){
		printf("\nday la ngay thu 5");
		}
	if(dem % 7 == 5){
		printf("\nday la ngay thu 6");
		}
	if(dem % 7 == 6){
		printf("\nday la ngay thu 7");
		}
	}
	else{
	    printf("Ban da nhap sai thong");
	}
	
}
