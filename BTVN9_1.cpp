#include<stdio.h>
#include<string.h>
int main() {
	char s[20];
	printf("Nhap vao chuoi : ");
	scanf("%s",s);
   	int i = 0;
  	int vowels = 0;           	// bien de dem so nguyen am
   	int consonants = 0;       	// bien de dem so phu am
   	   
   while(s[i++] != '\0'){		//khi chuoi khac \0 -> true	
      	if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
        	vowels++;
      	else
        	consonants++;
   }
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, vowels, consonants);
}
