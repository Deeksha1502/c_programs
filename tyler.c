#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
	int degree,i;
	float x,nume,deno,term,sum=0;
	printf("enter degree\n");
	scanf("%d",&degree);

	x=degree*(PI/180);
	nume=x;
	deno=1;
	i=2;
	do
	{
		term=nume/deno;
		nume=-nume*x*x;
		deno=deno*i*(i+1);
		sum=sum+term;
		i=i+2;
	}
	while(fabs(term)>=0.000001);
	printf("sine of %d=%.3f\n",degree,sum);
	printf("using built in functions %d=%.3f",degree,sin(x));
	
	

}
