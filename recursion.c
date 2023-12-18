#include<stdio.h>

/*void hello(int a,int i,int c){
	if(i == a){//base
		return;//base
	}// base
	printf("%d.hello world! ",c);
	//c++;
	hello(a,i+1,c+1);
	// return is used as break function in functions;
}*/

int main()

{
	int i,a,c=1;
	scanf("%d",&a);
	for(i = a; i> 0;i--){
	printf("%d.hello world!\n",c);
	c++;
	}
	//hello(a,0,c);
}
