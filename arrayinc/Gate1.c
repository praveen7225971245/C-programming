#include<stdio.h>
int main(){
    int a[] = {1,2,3,4};
    printf("%u\n",a);
    printf("%u\n",*a);
    printf("%u\n",&a);

    printf("%u\n",a+1);
    printf("%u\n",*a+1);
    printf("%u\n",&a+1);
    


    printf("%d\n",a[1]);
    printf("%d\n",*(a+1));
    printf("%d\n",*(1+a));
    printf("%d\n",1[a]);

}