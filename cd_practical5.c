#include <stdio.h>
#include <string.h>
int main() 
{
    char expr[]="position = initial  + rate * 50 ; ";
    char identifier[100],Digit[100],Symbols[100];
    int j=0,k=0,n=0;
    printf("Expression is :");
    printf("%s\n",expr);
    
    for(int i=0;i<strlen(expr);i++)
    {
        char ch = expr[i];
        if(ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'
           ||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'
           ||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'
           ||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'
           ||ch=='y'||ch=='z')
           {
               identifier[j]=ch;
               j++;
           }
          if(identifier[j-1]!=ch)
          {
              if(ch==' ')
              {
                  identifier[j]=' ';
                  j++;
              }
          }
          if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'
             ||ch=='6'||ch=='7'||ch=='8'||ch=='9')
             {
                 Digit[k] = ch;
                 k++;
             }
             
            	
             if(ch=='+'||ch=='-'||ch=='/'||ch=='*'||ch==';')
             {
                Symbols[n] = ch;
                n++;
             }
          }
          printf("\nIdentifiers are:");
          for(int i=0;i<strlen(identifier);i++)
          printf("%c",identifier[i]);
          
          printf("\nDigits are:");
          for(int i=0;i<strlen(Digit);i++)
          printf("%c",Digit[i]);
          
          printf("\nSymbols are:");
          for(int i = 0; i<strlen(Symbols);i++)
          printf("%c ",Symbols[i]);
          return 0;
    
}
