// to find the number is palindrome or not
#include<stdio.h>

int main()
{
    int n,i,n1,rev = 0;
    
    scanf("%d",&n);
    
    i=n;
    
    while(n != 0){// 12 != 0 
        
        n1 = n%10;// 121%10 = 1, 12%10 = 2
        rev = (rev*10)+n1;//0*10+1=1 , 1*10+2=12
        n/=10;//121/10 = 12,12/10 = 1 
    }
        
    if(rev == i){
        printf("true");
    }else{
        printf("false");
    }
    
}
