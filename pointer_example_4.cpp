#include<stdio.h>

int main(){
	int x = 6;			
	int *xptr = &x;;
	
	xptr = &x;		// xptr gostergesine x adli bellek hucresinin adresi atandi
	
	printf("x'in onceki degeri: %d\n", x);
	
	

	x = *xptr + 1;		// xptr gostergesinin gosterdigi bellek hucresindeki deger 1 artirildi

	printf("x'in sonraki degeri: %d\n", x);

	return 0;
}
