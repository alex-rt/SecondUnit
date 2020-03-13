#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
int year;
int k;
for(year=1; year<=99; year++)
{
if (10<year<=99)
	if((year%11)==0)
		printf("%d => capicua!\n", year);

}

if (99<year<199)
	for(year=99; year<199; year++)
	{
	k=101;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (199<year<299)
	for(year=199; year<299; year++)
	{
	k=202;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (299<year<399)
	for(year=299; year<399; year++)
	{
	k=303;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (399<year<499)
	for(year=399; year<499; year++)
	{
	k=404;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (499<year<599)
	for(year=499; year<599; year++)
	{
	k=505;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (599<year<699)
	for(year=599; year<699; year++)
	{
	k=606;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (699<year<799)
	for(year=699; year<799; year++)
	{
	k=707;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (799<year<899)
	for(year=799; year<899; year++)
	{
	k=808;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
		
	}
if (899<year<999)
	for(year=899; year<=999; year++)
	{
	k=909;
		if(((year)-(k))%10==0)
			printf("%d => capicua!\n", year);
	}	
	
return 0;
}
