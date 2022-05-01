#include "stdio.h"
int main(){
	char *str = "Mehmet";
	printf("%c",*str);
	printf("\n%c",str);
	printf("\n%s",str);
	
	int a = 100 , b = 200;
	printf("\na: %d",a);
	printf("\nb: %d\n\n",b);
	
	int *p;
	int *r;
	p= &a;
	r= &b;
	
	int tmp = *p;
	*p = *r;
	*r = tmp;
	printf("\na: %d",a);
	printf("\nb: %d",b);
	
	
	return 0;
}