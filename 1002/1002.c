#include <stdio.h>
#include <math.h>

int arr[7][1000000]={0};

int len(int x1,int y1,int r1,int x2,int y2,int r2)
{
	double r;
	int l,s;

	r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

	if(r1>=r2)
	{
		l=r1;
		s=r2;
	}

	else
	{
		l=r2;
		s=r1;
	}

	if(r==0 && r1==r2)
	{
		printf("-1");
	}

	else if(r<r1+r2 && r+s>l)
	{
		printf("2");
	}

	else if(r==r1+r2 || r+s==l)
	{
		printf("1");
	}

	else
	{
		printf("0");
	}
}

int main()
{
	int t=0,i,x1,y1,r1,x2,y2,r2;

	scanf("%d",&t);

	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d %d %d %d",&arr[1][i],&arr[2][i],&arr[3][i],&arr[4][i],&arr[5][i],&arr[6][i]);
	}

	for(i=1;i<=t;i++)
	{
		len(arr[1][i],arr[2][i],arr[3][i],arr[4][i],arr[5][i],arr[6][i]);
		printf("\n");
	}
}