#include <stdio.h>

int main(void)
{
	int m=10,n,o;
	int *z=&m ;

	printf("\n\n Pointer : Show the basic declaration of pointer :\n");
	printf(" Here is m=10, n and o are two integer variable and *z is an integer");	
	printf("\n\n z stores the address of m  = %p\n",  z);
	printf("\n *z stores the value of m = %i\n",   *z); 
	printf("\n &m is the address of m = %p\n", &m);
	printf("\n &n stores the address of n = %p\n",   &n);
	printf("\n &o  stores the address of o = %p\n",   &o);
	printf("\n &z stores the address of z = %p\n\n", &z);
}
