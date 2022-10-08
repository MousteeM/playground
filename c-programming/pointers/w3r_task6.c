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

	//check if first value is greater than second
	if(*ptr_firstNum > *ptr_secondNum)
		printf("%d is the maximum number\n", *ptr_firstNum);
	else if(*ptr_secondNum > *ptr_firstNum) // check if second value greater than first
		printf("%d is the greater number\n", *ptr_secondNum);
	else
		printf("Both numbers are equal\n"); //check if both numbers are equal
}
