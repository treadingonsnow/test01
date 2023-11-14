#include<stdio.h>

int main()
{
	int x=2;
	
	for(x=2;x<100;x++)
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
	    }
	}
	getchar();
	return 0;
} 