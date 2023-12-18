//24137
#include<stdio.h>
int cll(int num){
	if(num == 0)return 0;
	return 1+cll(num/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	cll(n);
	printf("%d",cll(n));
}
