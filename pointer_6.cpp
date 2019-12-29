#include<stdio.h>  
#include<math.h>
int test(int *number);
int main()
{    
	int w = 12, *w_gos;
	double s = 3.5, *s_gos;
		w_gos = &w;
	printf("%d", test(&w_gos));

//	s_gos = &s;
//	w_gos = &w;
//	
//	*s_gos +=9.5;
//    *w_gos++;
//    
//    scanf("%lf", s_gos);
//    printf("%d %8.4f\n",*w_gos,*s_gos);
//    if(*s_gos>*w_gos)
//    {
//    	*s_gos =sqrt(*s_gos);
//	}
//    
//    printf("%.2f", *s_gos);
    return 0;
    
}

int test(int *x_pointer)
{
	return *x_pointer;
}

