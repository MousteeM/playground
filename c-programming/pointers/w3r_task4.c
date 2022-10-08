#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr_firstNum, *ptr_secondNum;
	ptr_firstNum = malloc(sizeof(int));
	ptr_secondNum = malloc(sizeof(int));

	printf("Input the first number\n");
	scanf("%d", ptr_firstNum); //Get first value from user
	printf("Input the second number\n");
	scanf("%d", ptr_secondNum); //Get second value from user
	printf("The sum of the entered numbers is : %d\n", (*ptr_firstNum + *ptr_secondNum));
}
