#include <stdio.h>
#include <string.h>

void swapChar(char *firstCh, char *secondCh)
{
	char temp;
	temp = *firstCh;
	*firstCh = *secondCh;
	*secondCh = temp;
}

void strPermutation(char *string, int leftIndex, int rightIndex)
{
	int i;
	if(leftIndex == rightIndex)
		printf("%s ", string);
	else
	{
		for (i = leftIndex; i <= rightIndex; i++)
		{
			swapChar((string + leftIndex), (string + i));
			strPermutation(string, leftIndex+1, rightIndex);
			swapChar((string + leftIndex), (string + i));
		}
	}
}

int main(void )
{
	char str[30];
	printf("\nPointer : Generate permutations of a given string :\n");
	printf("\nEnter the string you would like to permutate\n");
	scanf("%s", str);
	int n = strlen(str);
	printf("The permutations of the string are : \n");
	strPermutation(str, 0, n - 1);
	printf("\n");
	return(0);

}
