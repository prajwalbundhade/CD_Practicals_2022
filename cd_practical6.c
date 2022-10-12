#include<stdio.h>
#include<string.h>

int main(){
    char expression[] = "A + B * 10;";
    char Identifier[100], Number[99], Operator[99];
    int j=0, k=0, l=0;
    printf("Expresion is : ");
    printf("%s \n", expression);
    
    for(int i=0; i<strlen(expression); i++)
    {
        char ch = expression[i];
        if (ch == 'A' || ch == 'B' || ch == 'c' || ch == 'd' ||
           ch == 'e' || ch == 'f' || ch == 'g' || ch == 'h' ||
           ch == 'i' || ch == 'j' || ch == 'k' || ch == 'l' ||
           ch == 'm' || ch == 'n' || ch == 'o' || ch == 'p')
           {
               Identifier[j] = ch;
               j++;
           }
           if(Identifier[j-1]!=ch)
           {
               if(ch ==' '){
                   Identifier[j] = ' ';
               j++;
               }
    }
    if (ch == '0' || ch == '1' || ch == '2' ||
        ch == '3' || ch == '4' || ch == '5' ||
        ch == '6' || ch == '7' || ch == '8' ||
        ch == '9')
        {
            Number[k] = ch;
            k++;
        }
    if (ch == '+' || ch == '-' || ch == '*' ||
        ch == '/' ||ch == '=')
       { Operator[l] = ch;
        l++;
       }
    }
    printf("\nIdentifier are : ");
    for(int i=0; i<strlen(Identifier);i++)
    printf("%c ", Identifier[i]);
    
    printf("\nNumbers are : ");
    for(int i=0; i<strlen(Number);i++)
    printf("%c ", Number[i]);
    
    printf("\nOperators are : ");
    for(int i=0; i<strlen(Operator);i++)
    printf("%c ", Operator[i]);
    
    return 0;
    
    
}