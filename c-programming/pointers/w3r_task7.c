#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j, *array;

	printf("Input the number of elements to store in the array\n");
	scanf("%d", &n); //Get number of elements from user


	array = malloc(sizeof(int) * n);
	for(i = 0; i < n; ++i)
	{
		printf("element %d : \n", i);
		scanf("%d", (array + i));
	}

	printf("The elements you entered are :\n");
	for(i = 0; i < n; ++i)
	{
		printf("element - %d : %d\n", i, *(array + i));
	}

	return(0);
}
