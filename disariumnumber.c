#include<stdio.h>
int main()
{
    int i = 1,n,sum=0,a;
    scanf("%d",&n);
    a=n;
    for(i = 1;a!=0;i++){
        int n1 = a%10;
        int n2 = n1*i;
        sum = sum+n2;
        a/=10;
       // if(i==4){
         //   break;
        //}
    }/*if(sum == n){
        printf("True");
    }else{
        printf("False");
    }*/printf("%d",sum);
}
