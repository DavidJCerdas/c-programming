#include <stdio.h>
#include <string.h>
int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";
	// Creating a Buffer
	char bufferx[64];
	strcpy(bufferx,first);
	strcat(bufferx,second);

	printf("Here is your string: \n%s",bufferx);
	return(0);
}