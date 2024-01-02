#include<stdio.h>
struct rectangle{
	float len;
	float wid,area,peri;
};
int main(){
	// structure initialization
	//struct student s1 = {"Anji Babu Nakka", 18};
	//membership operator
	//printf("Name : %s\n Age : %d", s1.name,s1.age);
	/*struct student s1;
	printf("Enter name : ");
	scanf("%[^\n]s",s1.name);
	printf("Enter age : ");
	scanf("%d",&s1.age);
	printf("Name\t\tAge\n-----------------\n");
	printf("%s\t%d",s1.name,s1.age);
	}*/
	struct rectangle r2;
	printf("Enter length of rectangle : ");
	scanf("%f",&r2.len);
	printf("Enter wid of rec : ");
	scanf("%f",&r2.wid);
	r2.area = r2.len * r2.wid;
	r2.peri = 2 * (r2.len + r2.wid);
	printf("%.2f\t%.2f",r2.area,r2.peri);
}
