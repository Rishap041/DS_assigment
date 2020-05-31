//For sorting string , ignore the spaces and convert the string to lowercase as string characters are compared using  ASCII values
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void swap(int *x,int *y)
 {    int temp=*x;
      *x=*y;
      *y=temp;
 }

 void Merge(int A[],int l,int mid,int h)
  {
        int i=l,j=mid+1,k=l;
        int B[100];
         while(i<=mid && j<=h)
             {
                    if(A[i]<A[j])
                      B[k++]=A[i++];
                    else
                      B[k++]=A[j++];
             }
              for(;i<=mid;i++)
                        B[k++]=A[i];
              for(;j<=h;j++)
                        B[k++]=A[j];
              for(i=l;i<=h;i++)
                        A[i]=B[i];
    }

    void MergeSort(int A[],int l,int h)
     {
            int mid;
              if(l<h)
        {
            mid=(l+h)/2;
            MergeSort(A,l,mid);
            MergeSort(A,mid+1,h);
            Merge(A,l,mid,h);
        }
    }

int main()
{

	char A[100];
	int R[100];
	printf("Enter the String\n");
	gets(A);
	int n=strlen(A);
	int i=0;
	while(A[i]!='\0')
	{
		A[i]=tolower(A[i]);//converting string to lowercase
		R[i]=A[i];
		i++;
	}
	MergeSort(R,0,n-1);
	printf("The sorted String is(merge sort)\n");
	for(int i=0;i<n;i++)
		{
			if(R[i]==' ') continue;//ignoring spaces
			printf("%c",R[i]);
		}
	return 0;
}
