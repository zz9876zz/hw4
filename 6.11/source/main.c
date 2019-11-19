#include<stdio.h>
#include<stdlib.h>
int a, b, c, d, e,i,j,k;
int main()
{
	int w = 0;
	printf("¿é¤J5­Ó¼Æ:"); scanf_s("%d%d%d%d%d",&a,&b,&c,&d,&e);
	int q[5] = { a, b, c, d, e };
	for (i = 0; i <5; i++)
	{
		if (q[0] < q[1] && q[1] < q[2] && q[2] < q[3] && q[3] < q[4])break;
		for (j = 1; j <5; j++)
		{
			if (q[j-1] > q[j])
			{
				w = q[j];
				q[j] = q[j-1];
				q[j-1] = w;
				
			}
			
		}
		for (k = 0; k <5; k++)
		{
			printf("%d ", q[k]);
		}
		printf("\n");
		
	}
	
	system("pause");
	return 0;
}