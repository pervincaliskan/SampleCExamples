#include<stdio.h>
void xyz(int a, int*n);
int a = 5;
int main()
{
	int b = 9, a= 12;
	printf("First %3d %3d\n",a,b);
	xyz(b, &a); //Reference pass
	printf("Final %3d %3d\n",a,b);
	return 0;
}
void xyz(int a,int*b) //value and reference pass
{
	*b = a+*b/3;
	a=4;
	printf("%3d %3d\n",a,*b);
}

