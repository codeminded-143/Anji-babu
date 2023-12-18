//24137
#include<stdio.h>
int cll(int n,int c){
	while(n!=0){
		int n1 = n%10;
		c++;
		n/=10;
	}return c;
}
int main()
{
	int n,c = 0;
	scanf("%d",&n);
	cll(n,c);
	printf("%d",cll(n,c));
}
