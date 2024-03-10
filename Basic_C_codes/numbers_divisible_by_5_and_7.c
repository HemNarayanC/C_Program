//WAP to display all the numbers between 1 and 100 that is divisible by 5 and 7

#include <stdio.h>
int main()
{
	int n=1;
		
	up:
	if(n%5==0 && n%7==0)
	{
		printf(" %d", n);
	}
	n++;
	
	if(n<=100)
	{
		goto up;
	}

	return 0;
}