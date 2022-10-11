#include <stdio.h>
#include <stdlib.h>

void swapElement(int *element1, int *element2, int *element3);

int main(void)
{
	int a, b, c;

	printf("Input the value of 1st element :\n");
	scanf("%d", &a);
	printf("Input the value of 2nd element :\n");
	scanf("%d", &b);
	printf("Input the value of 3rd element :\n");
	scanf("%d", &c);

	printf("The value before swapping are :\n");
	printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",a,b,c);
	swapElement(&a, &b, &c);
	printf("The value after swapping are :\n");
	printf(" element 1 = %d\n element 2 = %d\n element 3 = %d\n",a,b,c);
}

void swapElement(int *element1, int *element2, int *element3)
{
	int temp;

	temp = *element1;
	*element1 = *element2;
	*element2 = *element3;
	*element3 = temp;
}
