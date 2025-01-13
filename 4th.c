#include <stdio.h>
#include <stdlib.h>

void input(int n,int a[n][n], int b[n][n])
{
	int i,j;
	printf("Enter the array 1: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",(*(a+i)+j));
		}
	}
	
	printf("Array 2: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
}

void product(int n,int a[n][n],int b[n][n],int c[n][n])
{
	int i,j,k;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
				*(*(c+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
			}
		}
	}
}

void print(int n, int c[n][n])
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int n,i,j,k;
	printf("Enter the size: ");
	scanf("%d",&n);
	int (*a)[n] = (int(*)[n])malloc(n*n*sizeof(int));
	int (*b)[n] = (int(*)[n])malloc(n*n*sizeof(int));
	int (*c)[n] = (int(*)[n])calloc(n*n,sizeof(int));
	
	input(n,a,b);
	product(n,a,b,c);
	
	printf("Resultant matrix: \n");
	print(n,c);
}
