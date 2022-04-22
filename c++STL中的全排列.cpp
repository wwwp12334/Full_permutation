#include<stdio.h>
void Full_permutation(int *,int);
int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
	printf("0\n");
	return 0;
	}
	int arr[9]={1,2,3,4,5,6,7,8,9};
	Full_permutation(arr,n);
}

void Full_permutation(int *list,int len)
{
	while(1)
	{
		for(int k=0;k<len;k++)
		{
			printf("%d",list[k]);
		}
		printf("\n");
		int i;
		for(i=len-1;i>0;i--)
		{
			if(list[i]>=list[i-1])
			break;
		}
		if(i==0)
		break;
		int j=len-1;
		while(list[j]<=list[i-1])
		j--;
		int temp=list[j]; list[j]=list[i-1]; list[i-1]=temp;
		j=len-1;
		while(i<j)
		{
			int tem=list[i];
			list[i]=list[j];
			list[j]=tem;
			i++;
			j--; 
		}
	}
}
