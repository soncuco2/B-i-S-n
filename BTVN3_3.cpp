#include<stdio.h>
int main(){
	int s = 0;
	
	for(int i = 0; i < 200; i++){
		if(i % 2 != 0){
			s+=i;
			i++;
			
		}
	}	printf("tong la : %d", s);
}
