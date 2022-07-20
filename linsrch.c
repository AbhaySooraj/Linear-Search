/*To create a program to execute linear search*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}


void main()
{
	struct timeval t0;
   	struct timeval t1;
   	float elapsed;
	
	int x,n,i,j=0;
	
	printf("\n Enter number of elements ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("\n The elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d \t",arr[i]);
	}
	printf("\n Enter value to be searched :");
	scanf("%d",&x);
	gettimeofday(&t0, NULL);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("\n Element found at %d postion\n",i);
			j++;
			break;
		}
	}
	
	if(j==0)
	{
		printf("Element not found\n");
	}
	gettimeofday(&t1, NULL);
	elapsed = timedifference_msec(t0, t1);
  	printf("\nCode executed in %f milliseconds.\n", elapsed);
  	
}
