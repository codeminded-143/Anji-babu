#include<stdio.h>

int main(){
	int ans,n,n1;
	scanf("%d",&n);
    for(ans = 0; n>0 ;n1= n%10,n = n/10)
	{
		ans = (ans*10) + n1;
	}
	printf("reverse is %d",ans);
}



