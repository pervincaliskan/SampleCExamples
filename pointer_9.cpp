#include<stdio.h>
int xyz(int a, int *b);

int main(void)
{
	int x = 8, y = 15;
	printf("%3d",xyz(x ,&y));
	printf("%3d\n",y);
	return (0);
	
}

int xyz(int a,int *b)
{
	printf("%3d %3d\n",a,*b);
	*b = a-*b;
    printf("%3d %3d\n",a,*b);
    return(2*a);
    
}
