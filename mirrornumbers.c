#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
int year;
int k;
for(year=1; year<999; year++){

if (10<year<=99)
	if((year%11)==0)
		printf("%d => capicua!\n", year);



if (99<year<999)
	for(k=0; k<10; k++){
		if(((year)-(k*101))%10==0)
			printf("%d => capicua!\n", year);
		
	}
	
}
return 0;
}
