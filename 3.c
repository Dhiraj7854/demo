#include <stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	int i;
	int n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	getchar();
	struct student stu[n];
	for(i=0; i<n; i++)
	{
		printf("Enter name of stu:");
		gets(stu[i].name);
		printf("Enter roll: ");
		scanf("%d",&stu[i].roll);
		printf("Enter marks: ");
		scanf("%f",&stu[i].marks);
		getchar();
	}
	
	printf("Details: \n");
	for(i=0; i<n; i++)
	{
		printf("Roll: %d\n",stu[i].roll);
		printf("Name: %s\n",stu[i].name);
		printf("marks: %.2f\n\n",stu[i].marks);
	}
}
