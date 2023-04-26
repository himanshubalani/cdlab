//write a C program to identify whether a line is correct or not by checking for comment / and multi line comment /* */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char cdline[1000];
	 gets(cdline);
	 if (cdline[0] == '/' && cdline[1] == '*' && cdline[strlen(cdline) - 1] == '/' && cdline[strlen(cdline) - 2] == '*') {
		printf("%s is a multi-line comment", cdline);
	 }
	 else if (cdline[0] == '/' && cdline[1] == '/') {
		printf("%s is a single line comment", cdline);
	 }
	 else {
		printf("It is not a comment");
	 }
	 
}