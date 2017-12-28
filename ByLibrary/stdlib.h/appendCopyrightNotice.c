/*
 ============================================================================
 Name        : 13_03.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Use appropriate file access modes, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void copyFromSourceToDestination(void);
void appendCopyrightNotice(void);

int main(void) {

        //copyFromSourceToDestination();
        appendCopyrightNotice();

        return EXIT_SUCCESS;
}

//---- FUNCTION DEFINITIONS ----
void copyFromSourceToDestination(){
        int ch;
        FILE *src, *dest;  // pointers to a file type
        src = fopen("/c_lesson/myTextfile.txt","r"); // Change to match your path
        dest = fopen("/c_lesson/myTextfile.output.txt","w"); // Change to match your path
        ch = getc(src);
        while (ch != EOF){   // keep looping until EOF of source file
                putc(ch, dest);   // write to destination file
                ch = getc(src);
        }
        fclose(src);
        fclose(dest);
}

void appendCopyrightNotice(){
        FILE *fp;  // pointer to a file type
        // open the destination file to append copyright notice
        fp = fopen("/c_lesson/myTextfile.output.txt", "a"); // Change to match your path
        fprintf(fp,"\n\nCopyright 2014, XYZ Company");

        fclose(fp);
}