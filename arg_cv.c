#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) //argument count and argument vector
{
int i;
int num=atoi(argv[1]);
int maximum=atoi(argv[2]);

	for(i=0; i<argc; i++){
		printf("argv[%d] is %s \n" , i, argv[i]);
}

printf("%d\n" , num);
 
for(i=num; i<=maximum; i++)
{
	printf("%d\n" , i);
}

return (0);
}