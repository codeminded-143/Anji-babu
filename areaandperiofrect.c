#include<stdio.h>
int main()
{
	long int length,width,area,perimeter;
	printf("enter the length :");
	scanf("%ld",&length);
    printf("enter the width :");
	scanf("%ld",&width);
	area =length*width;
	perimeter =2*(length+width);
	printf("Area of rectangle : %ld\n perimeter of rectangle :%ld",area,perimeter); 		
}
