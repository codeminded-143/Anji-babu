#include<stdio.h>
int *findladders(int A[],int n,int *rs){
	int j =1;
	static int B[1000];
	B[0] = A[n-1];
	int i;
	for(i = n-2 ;i>=0;i--){
		if(A[i] > B[j-1]){
			B[j++]=A[i];
		}
	}
	*rs = j;
	return B;
}
int main()
{
	int n;
	scanf("%d",&n);//6
	int A[n],i;
	for(i=0; i<n;i++){
		scanf("%d",&A[i]);
	}
	int *returnsize;
	int *ptr = findladders(A,n,returnsize);
	int j= *returnsize;
	for(i =j-1;i>=0;i--){
		printf("%d ",ptr[i]);
	}
}
