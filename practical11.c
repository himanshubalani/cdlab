%
{ 
#include <stdio.h>
#include <string.h>
int i;
}
%

% %

[a - zA - Z] *
{
	for (i = 0; i <= yyleng; i++)
	{
		if ((yytext[i] == 'a') && (yytext[i + 1] == 'b') && (yytext[i + 2] == 'c'))
		{
			yytext[i] = 'A';
			yytext[i + 1] = 'B';
			yytext[i + 2] = 'C';
		}
	}

	printf("%s", yytext);
}

	% %

int main()

{
	printf("\nEnter a string: ");
	yylex();
}

int yywrap()
{
	return 1;
}