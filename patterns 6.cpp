#include<stdio.h>
int main(){
    int n,i,j,ch;
    scanf("%d",&n);
   
    for(i = 1;i<=n;i++){// if i runs one time j runs n times
        ch = 1; // entering into the loop starts with 1
        for(j = n;j>=i;j--){
            printf("%d",ch);
            ch++;
        }printf("\n");
        
    }
}
