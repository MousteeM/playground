#include <stdio.h>
#include <stdlib.h>

int sumTwoNums(int *num1, int *num2);

int main(void)
{
	int sum, *ptr_firstNum, *ptr_secondNum;
	ptr_firstNum = malloc(sizeof(int));
	ptr_secondNum = malloc(sizeof(int));
	printf("Input the first number\n");
	scanf("%d", ptr_firstNum); //Get first value from user
	printf("Input the second number\n");
	scanf("%d", ptr_secondNum); //Get second value from user

	sum = sumTwoNums(ptr_firstNum, ptr_secondNum);
	printf("The sum of %d and %d is : %d\n",*ptr_firstNum, *ptr_secondNum, sum);


}

int sumTwoNums(int *num1, int *num2)
{
	return(*num1 + *num2);
}
