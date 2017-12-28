#include <stdio.h>

// Below is the prototype
void blorf(void);

int main()
{
	puts("The main() function always runs first");
	blorf();
	puts("Thanks, blorf()");

	return(0);
}

# Here you describe the function
void blorf(void)
{
	puts("The blorf() function runs when it's called");
}
