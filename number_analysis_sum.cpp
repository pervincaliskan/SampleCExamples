#include<stdio.h>
void sumOfGivenNumber(int number);
int main()
{
	int number;
	printf("Bir sayi giriniz:");
	scanf("%d",&number);
	sumOfGivenNumber(number);
	return 0;
}
 void sumOfGivenNumber(int number)
 {
 	//123//
 	int kalan, toplam = 0, temp;
 	temp = number;
 	
	while(number != 0)
	{
	 	kalan = number % 10;
	 	toplam += kalan;
	 	number /= 10;	 	
	}
	
	printf("sum of %d number analysis : %d", temp, toplam);	
 }
