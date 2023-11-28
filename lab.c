#include<stdio.h>
int main(){
while(1){
int user;

printf("Menu:\n1.Add\n2.Display\n3.Empty\n4.Terminate\nChoose: ");

scanf("%d", &user);

if (user==0||user>3){
    printf("Program terminated!");
    return 0;
}

switch (user){
case 1: {
    char user2[50];
    printf("Enter product and price: ");
    fflush(stdin);
    gets(user2);
    FILE*sample;
    sample=fopen("input.txt","a");
    fprintf(sample,"%s\n",user2);
    fclose(sample);
break;


} case 2:{
    int i=1;
    char temp[100];
    FILE*sample;
    sample=fopen("input.txt","r");
    while (fgets(temp,100,sample)!=NULL){
    printf("%d: %s ",i,temp);
i++;
    }
break;


}case 3:{
    FILE*sample;
    sample=fopen("input.txt","w");
     printf("The file is now empty!\n");
    break;
}
}
}


return 0;
}
