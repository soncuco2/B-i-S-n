#include<iostream>
#include <math.h>
int BCNN(int a, int b){
    // N?u a = 0 => ucln(a,b) = b
    // N?u b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        }else{
            b -= a;
        }
    }
    return a; // return a or b, b?i vì lúc này a và b b?ng nhau
}
 
int main(){
	int a;
	int b;
	printf("Nhap vap gia tri a : ");
	scanf("%d", &a);
	printf("Nhap vap gia tri b : ");
	scanf("%d", &b);
	printf("boi chung nho nhat cua 2 so la : %d", BCNN(a,b));
}
    
