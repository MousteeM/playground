#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	float *array;

	printf(" Input total number of elements(1 to 100): ");
	scanf("%d", &n);

	array = calloc(n, sizeof(float));
	if(array == NULL)
		printf("Allocate memory for array\n");
	for(i = 0; i < n; i++)
	{
		printf("Number %d\n", i + 1);
		scanf("%f", (array+i));
	}
	for(i = 0; i < n; i++)
	{
		if(*array < *(array + i))
			*array = *(array + i);
	}
	printf("The Largest element is :  %.2f \n\n", *array);

}
