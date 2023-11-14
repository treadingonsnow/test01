#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=2,k=1,kk=0;
	scanf("%d",&kk);
	
	for(x=2;k<=kk;x++)
	{
		int i=2;
		int p=1;
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				p=0;
				break;
			}
		}
		if(p==1)
		{	
		printf("%d ",x);
		k++;
	    }
	}
	getchar();
	system("pause");
	return 0;
}