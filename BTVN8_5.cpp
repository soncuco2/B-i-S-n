#include<stdio.h>
int UCLN(int a, int b){
	// Lap to'i khi 1 trong 2 s�' bang' 0
    while (a*b != 0){
        if (a > b){
            a %= b; // a = a % b
        }else{
            b %= a;
        }
    }
    return a + b; // return a + b, boi v� l�c n�y hoac a , b d� bang 0.
}
int main(){
	int a;
	int b;
	printf("Nhap vao so a : ");
	scanf("%d", &a);
	printf("Nhap vao so b : ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua hai so la : %d", UCLN(a,b));
}
