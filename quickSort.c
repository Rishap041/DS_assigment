#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp =*x;
    *x=*y;
    *y=temp;
}

int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i=l;
    int j=h;

    do
        {
            do{i++;}while(arr[i]<=pivot);
            do{j--;}while(arr[j]>pivot);

            if(i<j)
                swap(&arr[i],&arr[j]);
        }while(i<j);
        swap(&arr[j],&arr[l]);

        return j;

}

void quickSort(int arr[],int l,int h)
{
    int z;
    if(l<h)
    {
         z=partition(arr,l,h);
         quickSort(arr,l,z);
         quickSort(arr,z+1,h);
    }


}


int main()
{
    int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int A[n+1];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);

	quickSort(A,0,n);
	printf("The sorted array is(quick sort)\n");
	for(int i=0;i<n;i++)
		printf("%d ",A[i]);
	return 0;


}
