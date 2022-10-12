#include<stdio.h> int main ()
{
char Exp[30]; int i=0,x=0;
printf("Enter Expression"); scanf("%s",Exp);

while(Exp[i]!='0')
{
if (Exp[i]=='(')
{ x++;

}
else if(Exp[i]==')')
{
x--;
if(x<0) break;
} i++;
}

if(x==0)
{
printf("Balanced Expression");

}
else
{

printf("Unbalanced Expression");

}
return 0;
}
