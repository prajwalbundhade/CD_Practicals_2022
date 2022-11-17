#include <stdio.h>
int main() {
 char str[20];
 printf("Enter a String : \n");
 scanf("%s",str);
int j=0;
 
 for(int i=0; i<strlen(str); i++){
 char ch = str[i];
 if(ch == '0' || ch == '1' || ch == '2'
 || ch == '3' || ch == '4' || ch =='5'
 || ch == '6' || ch == '7' || ch =='8'
 || ch == '9' ){
 j++;
 }
 }
 if(j>0){
 printf("String contains a number.");
 }else{
 printf("String does not contain a number.");
 }
 
 
 return 0;
}
