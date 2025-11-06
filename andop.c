#include<stdio.h>
int main(){
    int  a = 11,b=20,c=29;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",(++a>b--)&&(b++>--c));

}