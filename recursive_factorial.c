#include <stdio.h>
#include <stdlib.h>

int calculateRecursiveFactorial(int number);
int main() 
{
    int number;
    printf("sayi giriniz:");
    scanf("%d",&number);   
   
    printf("%d factorial  : %d", number, calculateRecursiveFactorial(number));
    return 0; 
}
int calculateRecursiveFactorial(int number)
{
	//Recursive
	if(number == 0)
	{
		return 1;	
	}
	else
	{
		return number * calculateRecursiveFactorial(number - 1);
	}
}
