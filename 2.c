#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter size: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int count=0;
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i]>arr[j])
			{
				count++;
			}
		}
	}
	
	printf("Total inversions: %d",count);
}
