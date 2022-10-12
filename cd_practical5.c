#include<stdio.h>
#include <stdlib.h>
int main()
{
char exp[50];
int symbol=0,number=0,id=0; char sym[20],ide[20];
char num[20];
int j=0,k=0,1=0,temp=0;
printf("Enter the expression\n"); scanf("%s", &exp); //printf("%s",exp);
int length=strlen(exp);
for(inti=0;i<length;i++){
if(exp[i] == ''||exp[i] == '+' ||exp[i] == '-' ||exp[i] =='*' || exp[i] == '/'||exp[i] ==','
               ||exp[i] == ' ' ||exp[i] == '>' ||exp[i] =='<' ||exp[i] == '=' || exp[i] =='('
               ||exp[i] == ')' ||exp[i] == '[' ||exp[i] ==']' ||exp[i] == '{' ||exp[i]== '}')
     {      symbol++;
            temp=exp[i]; 
            exp[i]=sym[j]; 
            sym[j]=temp;
            j++;

     }
else if(exp[i] == '+' ||exp[i] == '' ||exp[i] == '*' || exp[i] =='/' ||exp[i] =='>' ||exp[i] =='<'
             || exp[i] == "=")
      {     symbol++;
           temp=exp[i];
           exp[i]=sym[j];
           sym|[j]=temp;
           j++;
      }
else if(exp[i] =='0' ||exp[i] == '1' ||exp[i] == '2' || exp[i] == '3' ||exp[i] == '4'||exp[i] == '5'
            ||exp[i] == '6' ||exp[i] == '7' ||exp[i] == '8' ||exp[i] == '9' )
    {
            number++;
            temp=exp[i];
            exp[i]=num[k];
            num[k]=temp;
            k++;
    }

else{
id++;
temp=exp[i];
exp[i]=ide[l];
ide[l]=temp;
l++;

}

printf("Identifiers=Y%d\n",id);
for(int a=0;a<strlen(ide);a++){
printf("%c\n"ide[a]);

}

printf("Symbol=%d\n",symbol);

for(int b=0;b<strlen(sym);b++){
printf("%c\n",sym[b]);

printf("Number=%d\n",number);

for(int i=0;i<strlen(num);i++){
printf("%c\n",num[i]);

}
}
