 #include<stdio.h>

 int main(){
 int totalInput, userInput[10],i, countNum, j=0, x;
 char ch;

 do{
 printf("\nMENU\n");
 printf("[I] input\n");
 printf("[E] exit\n");
 printf("Choice:", ch);
 fflush(stdin);
 scanf("%c", &ch);

 switch(ch){
 case'I':
 printf("How many?");
 scanf("%d", &totalInput);
 for(i=1; i<=totalInput; i++){
 printf("Num%d:", i);
 scanf("%d", &userInput[j]);
 j++;

 break;
 }


case'D':

 for(x=0;x<totalInput; x++){
  }printf("%d", userInput[x]);

 }
 } while(ch!='E' && ch!='e');
 return 0;
 }







