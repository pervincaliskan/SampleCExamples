/*2 tane say�
a ve b even number olmal�
a == b ise kullan�c� hata mesaj�n� gormeli ve terminate olmal�*/
#include<stdio.h>

void displayMultiplicationTable(int number1, int number2);
int main()
{
	
	int a,b;
	printf("iki sayi gir:");
	scanf("%d %d", &a,&b);
	
	if((a % 2 == 0 && b % 2 == 0) && a != b) 
	{
		displayMultiplicationTable(a, b);
	}
	else
	{
		printf("hata");
	}
	return 0;
     
}
void displayMultiplicationTable(int a, int b)
{
	for(; a <= b; a++)
	{
		for(int j = 1; j <= 10; j++) 
		{
			printf("%d * %d : %d\n", a, j, a*j);
		}
	}
}
