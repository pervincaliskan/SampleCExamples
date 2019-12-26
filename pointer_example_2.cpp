#include<stdio.h>

int main()

{
	int a ;
	int b ;
/*	int result = 0;
	int *result;*/
	scanf("%d %d", &a , &b);
	
	int *aptr;
	int *bptr;
	
	aptr = &a;
	bptr = &b;
	
	printf(" a degiskenin degeri %d\n",a);
	printf("a degiskenin adersi %p\n", &a);
	
	printf(" a degiskenin degeri %d\n", *aptr);
	printf(" a degiskenin adresinin pointer degeri %p\n",aptr);
	
		printf(" b degiskenin degeri %d\n",b);
	printf("b degiskenin adersi %p\n", &b);
	
	printf(" b degiskenin degeri %d\n", *bptr);
	printf(" b degiskenin adresinin pointer degeri %p\n",bptr);
	
	return 0;
	
}
