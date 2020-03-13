#include <stdlib.h>
#include <stdio.h>
int main (void){
int x= 0;
printf("%p\n" , (void *)&x); //use and co retrieve the adress of a variable 
//(%p formats an object pointer of type void *)
//=> Prints some address in memory

//Pointers start with * in their declaration
int *px, not_a_pointer; //px is a pointer to an int
px =&x; //stores the address of x in px
printf("%p\n", (void*)px);//prints some address in memory
printf("%zu, %zu\n", sizeof(px), sizeof(not_a_pointer));
// prints "8, 4" on a typical 64bit system 
/* To retrieve the value at the address a pointer is pointing to, put * in front to derefence it*/
printf("%d\n",*px); //=> prints 0, the value of x
/*You can also change the value the pointer is pointing to. we+ll have to wrap the dereference in parenthesis because ++ has a highier precedence than * */
(*px)++; //Increment the value px is pointing to by 1
printf("%d\n" , *px);
printf("%d\n" ,x);
return 0;
}