#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d",&n);
    ch = 'A';
    for(i =1;i<=n;i++){
        for(j = 1;j<=n;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
}
