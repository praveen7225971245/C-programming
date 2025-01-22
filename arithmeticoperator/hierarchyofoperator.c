#include<stdio.h>
int main(){
    int s,p,q,r;
    printf("enter three number :");
    scanf("%d%d%d",&p,&q,&r);
    s=p-++r-++q;
    printf("the value of %d",s);
    return 0;
}