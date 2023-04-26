%{
#include<stdio.h>
%}

%%
if |
else |
printf {printf("%s is a keyword\n", yytext);}
[0-9]+ {printf("%s is a constant \n",yytext);} \-|\*\+ {printf("%s an operator\n",yytext);}
[a-zA-Z][a-zA-Z0-9]* {printf("%s is an identifier\n",yytext);}
.|\n {ECHO;}
0/0/
%%

int main(){ printf("\nEnter the string: "); yylex();
}
int yywrap(){
return 1;
}