#include <stdio.h>
#include<string.h>
int main(void) {
char str[] = "a+*b";
char operator[100];
int l=0;
printf("Expression is : ");
printf("%s \n",str);
for(int i=0; i<strlen(str); i++){
char ch = str[i], prech = str[i-1], postch = str[i+1];
if(ch == '+' || ch == '-' || ch == '/' ||
ch == '*' || ch == ';' || ch == '%' ){
operator[l] = ch;
l++;
if(prech == ch){
if(postch == 'a' || postch == 'b' ||postch == 'c' ||
postch == 'd' || postch == 'e' ||postch == 'f' ||
postch == 'g' ||postch == 'h' || postch == 'i' ||
postch == 'j' ||postch == 'k' ||postch == 'l' ||
postch == 'm' ||postch == 'n' ||postch == 'o' ||
postch == 'p' || postch == 'q' ||postch == 'r'||
postch == 's' ||postch == 't' ||postch == 'u' ||
postch == 'v' ||postch == 'w' ||postch == 'x' ||
postch == 'y' ||postch == 'z' )
printf("%c %c is a valid operator ",prech,ch);
}
else if(ch == postch){
if(prech == 'a' || prech == 'b' ||prech == 'c' ||
prech == 'd' ||prech == 'e' ||prech == 'f' ||
prech == 'g' ||prech == 'h' ||prech == 'i' ||
prech == 'j' ||prech == 'k' ||prech == 'l' ||
prech == 'm' ||prech == 'n' ||prech == 'o' ||
prech == 'p' ||prech == 'q' ||prech == 'r' ||
prech == 's'|| prech == 't' ||prech == 'u' ||prech == 'v' ||
prech == 'w' ||prech == 'x' ||prech == 'y' ||prech == 'z'
)
printf("%c %c is a valid operator ",ch,postch);
}
else if(prech == 'a' || prech == 'b' ||prech == 'c' ||
prech == 'd' ||prech == 'e' ||prech == 'f' ||
prech == 'g' ||prech == 'h' ||prech == 'i' ||
prech == 'j' ||prech == 'k' ||prech == 'l' ||
prech == 'm' ||prech == 'n' ||prech == 'o' ||
prech == 'p' ||prech == 'q' ||prech == 'r' ||
prech == 's' ||prech == 't' ||prech == 'u' ||
prech == 'v' ||prech == 'w' ||prech == 'x' ||prech ==
'y' ||prech == 'z' ){
if(postch == 'a' || postch == 'b' ||postch == 'c' ||
postch == 'd' ||postch == 'e' ||postch == 'f' ||postch == 'g' ||
postch == 'h' ||postch == 'i' ||postch == 'j' ||postch == 'k' ||
postch == 'l' ||postch == 'm' ||postch == 'n' ||postch == 'o' ||
postch == 'p' ||postch == 'q' ||postch == 'r' ||postch == 's' ||
postch == 't' ||postch == 'u' ||postch == 'v' ||postch == 'w' ||
postch == 'x' ||postch == 'y' ||postch == 'z')
printf("%c is a valid operator ",ch);
}
else
printf("Enter a Valid Operator in the Expression");
}
}
return 0;
}
