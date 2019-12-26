/*2 tane sayý
a ve b even number olmalý
a == b ise kullanýcý hata mesajýný gormeli ve terminate olmalý*/
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
