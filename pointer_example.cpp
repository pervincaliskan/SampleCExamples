/*
degisken : veri saklamak icin kullanilan bellek hucresine verilen isim
Gercek anlamda bellek, sirali hucrelerden olusur ve her bellek hucresi
bir adresle tanimlanir.
Degiskenler bu adreslere derleyici tarafindan atanirlar.
Degiskenler bu adreslerle belirtilen hucreleri kullanmamiza yarayan isimlerdir.

Gosterge(pointer) : bellekteki hucrelerin adreslerini saklayabilen ozel degiskenler
Diger degiskenler gibi kullanilmadan once program icinde tanimlanmalidir.
	veri_tipi *gosterge_adi;
veri_tipi: gostergenin bellekte gosterecegi yerin hangi veri tipinde oldugunu belirtir.

* operatoru: tanimlanan degiskenin gosterge tipinde olacagini belirtir

int *iptr;
float *fptr;
double *dptr;
char *cptr;

& operatoru : adres operatoru (normal degiskenle birlikte kullanilir)
	or: int x;
		&x  : x adli bellek hucresinin adresi

* operatoru : yonlendirme(indirection) operatoru (gosterge degiskeni ile birlikte kullanilir)
	or: int *xptr;
		*xptr : xptr gostergesinin gosterdigi adresteki bellek hucresinin icerigi

*/

#include<stdio.h>

int main(){
	int x = 4;		// tamsayi deger saklayacagim bir bellek hucresi ayir, adi x olsun ve baslangicta 4 degerini saklasin
	int *xptr;	// tamsayi deger saklayan bir bellek hucresinin adresini saklayabilecegim bir gosterge
	
	// xptr'nin x'in adresini saklamasi icin:
	xptr = &x;
	
	
	
	printf("x degiskeninin degeri: %d\n", x);
	printf("x degiskeninin adresi: %p\n", &x);
	
	printf("xptr gostergesinin gosterdigi yerdeki deger: %d\n", *xptr);
	printf("xptr gostergesinin degeri: %p\n", xptr);
	
	
	return 0;
}
