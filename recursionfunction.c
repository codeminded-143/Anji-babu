#include<stdio.h>
void Display(int i){// Function definition
if (i>=10)return;//base case
printf("Good Morning\n");
Display(i+1);//recursion call
}
int main()
{
	int i = 0;
	Display(i);//function call
}
