#¯x°}¶¶®É°w±ÛÂà
#include <stdio.h>
int main()
{
	int a[10][10];
	int M,N;
	scanf("%d %d",&M,&N);
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int j=0;j<N;j++)
	{
		for(int i=M-1;i>=0;i--)
		{
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}
