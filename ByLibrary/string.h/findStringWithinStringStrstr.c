#include <stdio.h>
#include <string.h>

int main()
{
	char source_string[] = "I am a stranger in a strange land";
	char find_me[64];
	char result[64];

	printf("Enter a word to search in the string \n");
	scanf("%s",find_me);
    // The result of strstr() if nothing is find NULL is return
	if( strstr(source_string,find_me) == NULL)
		puts("String not found!");
	else
		printf("Found '%s' in '%s'\n",find_me,source_string);
    /**
		weird output
	**/
    // result[64] = strstr(source_string,find_me);
    // printf("%s",result);

	return(0);
}
