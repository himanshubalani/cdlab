// Identify if given word is identifier or not

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



bool isIdentifier(char n[]) {
	int var = strlen(n);
	if ( n[0] == '_' || n[0] >= 'a' && n[0] <= 'z' || n[0] >= 'A' && n[0] <= 'Z' ) {
		for (int i=1;i < var ;i++) {
			if ( !(n[0] == '_' || n[0] >= 'a' && n[0] <= 'z' || n[0] >= 'A' && n[0] <= 'Z' || n[0] >= '0' && n[0] <= '9') ) {
				return false;
		}}}

		else {
			return false;
		}

		return true;

		}
	
int main(){
	char cdline[32];
	gets(cdline);
	
	if (isIdentifier(cdline) == 1 ){
		printf("%s is identifier.", cdline);
	}
	else {
		printf("%s is not an identifier", cdline);
	}
}