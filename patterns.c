// to do patterns
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i = 1;i<=n;i++){
	    printf("* ");//outer loop rows
	   for(j = 1;j<n;j++){//inner loop colomn
	   	printf("* ");
	   }
	   printf("\n");
	}
}
