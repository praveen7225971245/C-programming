#include<stdio.h>
struct Test{
    int i;
    char ch;
};

int main(){
    struct Test t = {15,'a'};
    {
        printf("%d \n",t.i);
        printf("%c \n",t.ch);
        t.i = t.i + 10;
        t.ch = t.ch + 1;
        printf("%d \n",t.i);
        printf("%c \n",t.ch);
    };
    

}