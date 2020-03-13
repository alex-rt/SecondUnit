#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	for(i=1500; i<=2100; i++){
		if(i%4==0)
			printf("%d is a leap year\n", i);
		if(i%100==0)
			printf("%d is a leap year\n", i);
		if(1%400==0)
			printf("%d is a leap year\n", i);
	}
return 0;
}