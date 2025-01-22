#include<stdio.h>
#include<string.h>
int main(){
    char ch[6]="vijay";
    // print charater 

    printf("%c \n" , ch[1]);
    printf("%d\n",ch[1]);

    // print string 
    printf("%s \n",&ch[0]);

    // print address in the string 
    printf("%p \n",&ch[0]);
    printf("%p \n",&ch[1]);
    printf("%p \n",&ch[2]);
    printf("%p \n",&ch[3]);
    printf("%p \n",&ch[4]);


    // long unsigned 
    printf("size of string ");
    printf("%lu",strlen(&ch[0]));

    
}