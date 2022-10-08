#include <stdio.h>

int main(void)
{
	int m, *ptr_m;
	float fx, *ptr_fx;
	char cht, *ptr_cht;
	m = 300;
	fx = 300.600006;
	cht = 'z';
	ptr_m = &m;
	ptr_fx = &fx;
	ptr_cht = &cht;

	printf("Using & operator :\n");
	printf("Address of m = %p\n", &m);
	printf("Address of fx = %p\n", &fx);
	printf("Address of cht = %p\n", &cht);

	//Using & and * operator :
	printf("\nUsing & and * operator :\n");
	printf("Value at address of m = %d\n", *(&m));
	printf("Value at address of fx = %f\n", *(&fx));
	printf("Value at address of cht = %c\n", *(&cht));

	//Using only pointer variable : 
	printf("\nUsing only pointer variable :\n");
	printf("Address of m = %p\n", ptr_m);
	printf("Address of fx = %p\n", ptr_fx);
	printf("Address of cht = %p\n", ptr_cht);

	//Using only pointer operator :
	printf("\nUsing only pointer operator :\n");
	printf("Value at address of m = %d\n", *ptr_m);
	printf("Value at address of fx = %f\n", *ptr_fx);
	printf("Value at address of cht = %c\n", *ptr_cht);
}
