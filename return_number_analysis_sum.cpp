#include<stdio.h>
int sumOfGivenNumber(int number);
int main()
{
	int number, result;
	printf("Bir sayi giriniz:");
	scanf("%d",&number);
	result = sumOfGivenNumber(number);
	printf("sum of %d number analysis : %d", number, result);	
	return 0;
}
 int sumOfGivenNumber(int number)
 {
 	//123//
 	int kalan, toplam = 0;
 	
	while(number != 0)
	{
	 	kalan = number % 10;
	 	toplam += kalan;
	 	number /= 10;	 	
	}
	
	return toplam;	
 }
