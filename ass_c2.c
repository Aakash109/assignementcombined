#include <stdio.h>
void result(int *a,int *b,int *c,float *d,float *e)
{
    *d=*a+*b+*c;
    *e=*d/3;
}

int main(){
    int a,b,c;
    float sum=0,total=0;
    printf("Write marks of 3 subjects:\n");
    scanf("%d %d %d",&a,&b,&c);
    result(&a,&b,&c,&sum,&total);
    printf("The sum is:%f and The percentage :%f\n",sum,total);
    return 0;
}
