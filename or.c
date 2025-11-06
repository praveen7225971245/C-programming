#include<stdio.h>
int main(){
    // int  a = 1,b=-1;
    // printf("%d\n",a--|| ++b);
    // printf("%d\n",a);
    // printf("%d\n",b);
    int  a = 11,b=20,c=29;
    printf("%d\n",++a || b-- && c++);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

}