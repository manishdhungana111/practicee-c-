#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],i=0,j=0,sum[2][3];
	//intput for matrix
	for(i=0;i<=1;i++)
	{
		for(j=0;i<=2;j++)
		{
			printf("\n enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			printf("\n enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n The resulting matrix is : \n");
	for(i=0;i<=1,i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
return 0;
}
