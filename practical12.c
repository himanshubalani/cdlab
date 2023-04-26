%{
#include<stdio.h>
int v=0;
int c =0;

%}

%%
[aeiouAEIOU] {v++; }
[a-zA-Z] {c++; }

int yywrap(){}

int main()
{
printf("Enter the string :");
yylex();
printf("Number of vowels are: %d", v); 
printf("Number of consonants are: %d", c);
 return 0;
 }