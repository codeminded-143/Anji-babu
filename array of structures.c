#include<stdio.h>
#define p printf
#define s scanf
struct student {
	char name[28];
	int age;
};
typedef struct student STU;
int main(){
	//Array of structures
	STU arr[3];
	int i;
	for(i = 0;i<3;i++){
		p("Enter the %d student name : ",i+1);
		s("%s",arr[i].name);
		p("Enter the %d student age : ",i+1);
		s("%d",&arr[i].age);		
	}
	printf("NAME\tAGE\n-----------\n");
	for(i = 0;i<3;i++){
		p("%s\t%d\n",arr[i].name,arr[i].age);
	}
}
