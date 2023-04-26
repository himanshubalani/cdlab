//Count the number of Characters, Numbers and Lines
#include <stdio.h>

int main() {
	FILE *file, *file1;
	file = fopen("himanshu.txt", "r");
	file1 = fopen("himanshu.txt", "r");
	char k, f;
	printf("File Content : \n");
	do {
		f = fgetc(file1);
		printf("%c", f);
		} while (f != EOF);
	int alphabetCount = 0;
	int wordCount = 0;
	int lineCount = 1;
	do {
		k = fgetc(file);
		if (k == ' ') {
			wordCount++;
			alphabetCount++;
			}
		else if (k == '\n') {
			wordCount++;
			lineCount++;
			}
		else {
			alphabetCount++;
			}
		} while (k != EOF);
	wordCount++;
	alphabetCount--;
	printf("\n\nNumber of Characters : %d\n", alphabetCount);
	printf("Number of Words : %d\n", wordCount);
	printf("Number of Lines : %d\n", lineCount);
}
