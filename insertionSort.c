
#include <stdio.h>
#include<stdlib.h>


    void InsertionSort(int A[],int n)
    {
        int i,j,x;
        for(i=1;i<n;i++)
        {
          j=i-1;
          x=A[i];
        while(j>-1 && A[j]>x)
            {
                A[j+1]=A[j];
                j--;
            }
              A[j+1]=x;
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

	InsertionSort(A,n);
	printf("The sorted array is(insertion sort)\n");
	for(int i=0;i<n;i++)
		printf("%d ",A[i]);
	return 0;


}
