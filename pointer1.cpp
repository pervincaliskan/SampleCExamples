#include<stdio.h>

int main(){
	int i = 5;
	int *p = &i;
	
	printf("%u\n",p); // & degiskenin adres bilgisini verir
	printf("%d",*p); // * işareti adresteki degeri verir 
}
