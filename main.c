#include <stdio.h>

int shuma(int n);

int main(void)
{
	int x;
	
	printf("Vendos n:");
	scanf("%d",&x);
	
	printf("\nVlera eshte %d",shuma(x));
}

int shuma(int n)
{
	if(n==1)
	{
		return 1;
	}
	else 
	{
		return n+shuma(n-1);
	}
}
