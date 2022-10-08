#include <stdio.h>

int main(void)
{
	int m, *ab;
	m = 29;

	printf("\n");
	printf("Address of m : %p\n", &m);
	printf("Value of m : %d\n", m);
	printf("\nNow ab is assigned with the address of m.");

	ab = &m;

	printf("\nAddress of pointer ab : %p\n", &ab);
	printf("Content of pointer ab : %d\n", *ab);
	printf("\nThe value of m assigned to 34 now.\n");

	*ab = 34;
	printf("Address of pointer ab : %p\n", &ab);
	printf("Content of pointer ab : %d\n", *ab);

	printf("\n");
	printf("The pointer variable ab is assigned with the value 7 now.\n");
	//The pointer variable ab is assigned with the value 7 now
	*ab = 7;
	printf("Address of m : %p\n", ab);
	printf("Value of m : %d\n", *ab);
}
