#include<stdio.h>
union Test{
    int i;
    char ch;
};

int main(){
    union Test t;
    {
       t.i = 15;
       printf("%d \n" ,t.i);
       t.ch = 'a';
       printf("%c \n",t.ch);
    };
    

}