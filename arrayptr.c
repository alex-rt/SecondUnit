#include <stdlib.h>
#include <stdio.h>
int main(void){
int x_array[20];
int xx;
for (xx = 0; xx<20; xx++){
	x_array[xx] = 20 -xx;
} // initialize x_array to 20,19,18....2,1

//Declare a pointer of type int and initialize it to point to x_array
int* x_ptr = x_array;
//x_ptr now points to the first element in the array (int20)
/*this works because arrays often decay into pointers to their first element,
for example, when an array is passed to a function or is assigned to a pointer, 
it decays into (implicity converted to) a pointer */
//exceptions:
int arr[10];
int(*ptr_to_arr)[10] = &arr;
char otherarr[] = "foobarbazquirk";
int arraythethird [10];
int *ptr = arraythethird;
printf("%zu, %zu\n", sizeof(arraythethird), sizeof(ptr));
//probably prints 40,4 or 40,8
//
//
printf("%d\n", *(x_ptr +1)); // prints 19
printf("%d\n", x_array[1]); //prints 19

return 0;
}



