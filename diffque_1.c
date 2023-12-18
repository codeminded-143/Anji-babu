/*1.write a function to take  2 inputs with in the function and print
    all numbers in that range.
  2.write a function to find a given number is prime or not.
  3.write a function to print a table.*/
  
#include<stdio.h>
// working properly

void fun_ction(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i = a;i<=b;i++){
		printf("%d ",i);
	}
}
int main()
{
	fun_ction();
  }  
