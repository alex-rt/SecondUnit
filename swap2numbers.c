#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swapTwoNumbers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
int num1 = 3;
int num2 = 8;
printf("First num: %d\nSecond num: %d\n", num1, num2);
swapTwoNumbers(&num1, &num2);
printf("First num: %d\nSecond num: %d\n", num1, num2);

	return(0);
}
	
