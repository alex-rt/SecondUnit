#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int add_two_int(int x, int y)
{
	return x+y;
}

int add_two_int(int num1, int num2);
int main (int argc, char**argv)
{
	int num1=atoi(argv[1]);
	int num2=atoi(argv[2]);
	int result=add_two_int(num1,num2);
	
	printf("the sum is %d\n" , add_two_int(num1,num2));
	
	return 0;
}