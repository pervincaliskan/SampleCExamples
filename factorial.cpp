#include<stdio.h>
void calculateFactorial(int number);
int main() 
{
   int number;
   printf("sayi giriniz:");
   scanf("%d",&number);   
   
   calculateFactorial(number);
	return 0;
}
void calculateFactorial(int number)
{
	int result = 1;
	for(int i = 0; i<number; i++)
	{
		result += result*i;
	}
	printf("Result : %d", result);
}
