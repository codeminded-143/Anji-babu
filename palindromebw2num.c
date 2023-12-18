/* to find the palindrome numbers b/w two numbers*/

#include<stdio.h>
int main(){
	int a,b,n1,rev=0,i;
	scanf("%d %d",&a,&b);
	for(i = a,b;a<b;i/=10,a++){
		//for(i = a;i!=0;i/=10){
			n1 = i%10;
			rev = (rev*10)+n1;
		//}//if(i == a){
			printf("%d\n",rev);
		}//else{
			
		}
	//}
//}


