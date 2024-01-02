// create an employee structure with 4 numbers
#include<stdio.h>
#define p printf
#define s scanf
struct employee{
	char name[28];
	char org[28];
	int year_of_join;
	float sal;
};
typedef struct employee STE;
int main(){
	STE arr[2];
	int i;
	for(i = 0;i<2;i++){
		s("%s",arr[i].name);
		s("%s",arr[i].org);
		s("%d",&arr[i].year_of_join);
		s("%f",&arr[i].sal);
	}
	p("Name\torgn\tyear\tsal\n--------------------\n");
	for(i = 0; i<2; i++){
		p("%s\t%s\t%d\t%.2f\n",arr[i].name,arr[i].org,arr[i].year_of_join,arr[i].sal);
	}
}
