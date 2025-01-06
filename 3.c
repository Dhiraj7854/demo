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
	struct student stu[n];
	for(i=0; i<n; i++)
	{
		printf("Enter roll of stu:");
		scanf("%d",&stu[i].roll);
		getchar();
		printf("Enter name: ");
		gets(stu[i].name);
		printf("Enter marks: ");
		scanf("%f",&stu[i].marks);
	}
	
	printf("Details: \n");
	for(i=0; i<n; i++)
	{
		printf("Roll: %d\n",stu[i].roll);
		printf("Name: %s\n",stu[i].name);
		printf("marks: %.2f\n\n",stu[i].marks);
	}
}
