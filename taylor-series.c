#include <stdio.h>
#include <math.h>

/* Function to calculate the factorial */

int fac(int x)
{
	int i,fac=1;
	for(i=1;i<=x;i++)
		fac=fac*i;
	return fac;
}

int main()
{
	float x,Q,sum=0;
	int i,j;

	printf("Enter the value of x of sinx series: ");
	scanf("%f",&x);

	Q=x;
	
	/*  Converting degrees to radians */
	
	x = x*(3.1415/180);

	for(i=1,j=1;i<=10;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/fac(j);
		}
		else
			sum=sum-pow(x,j)/fac(j);
	}

	printf("Sin(%0.1f): %f",Q,sum);
	return 0;
}