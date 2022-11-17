%{
%}
%%
[a-z]+ {
 printf("\n String contains only lower case 
letters.\n");
 }
[A-Z]+ { 
 printf("\n String contains only upper case 
letters.\n");
 }
[a-zA-Z]+ {
 printf("\n String contains both lower and upper case 
leters.\n");
 }
%%
void main(){
yylex();
}
