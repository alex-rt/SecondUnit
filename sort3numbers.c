#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
int a,b,c,min,max,med;
printf("Bienvenido a mi programa\n");
printf("introduce el primer numero:");
scanf("%i",&a);
printf("introduce el segundo numero:");
scanf("%i",&b);
printf("introduce el tercer numero:");
scanf("%i",&c);

	if (a>b){
		med=a;
		min=b;
	} else{
		med=b;
		min=a;
	}
	if (med>c){
		max=med;
		med=c;
	} else{
		max=c;
	}
	if (c<min){
		truemin=c;
		med=min;
		printf("%d < %d < %d", truemin,med,max);
	}
	else{
		printf("%d < %d < %d", min,med,max);
	}
	
return 0;
}

