
#include <stdio.h>
#include<math.h>
int main()
{
    int m,i,ele,k=0;
    long long unsigned sum=0;
    long long signed int a[10]={1,5,4,8,9,2,0,6,11,7};
    printf("how many items you want to know: ");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        int flag=1;
        scanf("%d",&ele);
        for(int j=0;j<10;j++)
        {
            if(ele==a[j]){
                printf("Yes\n");
                flag=0;
            }
        }
        if(flag!=0){
        printf("No\n");}
    }
    printf("------------------------------------\n");
    printf("printing the number with the sequence of the element\n");
    for(i=9;i>=0;i--){
        unsigned long int r=pow(10,k);
        //if(a[i]==0){
          //  a[i-1]=a[i-1]*10;
            //goto t;
        //}
        //printf("%llu\t",a[i]*r);
        sum=a[i]*r+sum;
        k++;
        if(a[i]>10){
            k++;
        }
          
          t:{}
    }   
    printf("%llu\n",sum);
    return 0;
}
