#include <stdio.h>

void inc_count(int *count_ptr)
{
	(*count_ptr)++;
}

int main()
{
	int count = 0; /*nuber of times through*/
	
	while (count < 10){
		inc_count(&count);
	printf(" Count is: %d\n", count);
	printf("Memory address is: %p\n", (void*)&count);
	}
	return(0);
}