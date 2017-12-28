#include <stdio.h>

// Below is the prototype
void repeat(int count);

int main()
{
	puts("At first the raven was like:");
	repeat(1);
	puts("But then he was all:");
	repeat(5);

	return(0);
}

// Here is the function
void repeat(int count)
{
	int x;

	for(x=0;x<count;x++)
		puts("Nevermore!");
}