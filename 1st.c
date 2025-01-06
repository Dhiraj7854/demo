#include <stdio.h>

int binary(int n,int arr[n],int start,int end)
{
    int mid = (start+end)/2;
    if (start == end)
    {
    	return arr[start];
	}
    if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
    {
        return arr[mid];
    }
    else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1])
    {
        return binary(n,arr,mid+1,end);
    }
    else{
        return binary(n,arr,start,mid-1);
    }
}
int main()
{	int i,n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i =0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = binary(n,arr,0,n-1);
    printf("max = %d",max);

}
