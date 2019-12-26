#include<stdio.h>

int main()

{
	int a = 10;
	int *aptr;
	aptr = &a;
	
	*aptr = 35;
	
	
	printf(" a degiskenin degeri %d\n",a);
	printf("a degiskenin adersi %p\n", &a);
	
	printf(" a degiskenin degeri %d\n", *aptr);
	printf(" a degiskenin adresinin pointer degeri %p\n",aptr);
	
	return 0;
	
}
