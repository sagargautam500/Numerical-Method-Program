//implement the program finds the roots using fixed point method::
#include<stdio.h>
#include<math.h>
#define f(x) cos(x)-3*x+1
#define g(x) (cos(x)+1)/3
int main()
{
	int count;
	float x0,x1,err,eps;
	printf("enter the initial guess\n");
	scanf("%f",&x0);
	printf("enter the tolerence error\n");
	scanf("%f",&eps);
	count=1;
	begin:
	x1=g(x0);
	err=fabs((x1-x0)/x1);
	if(err<eps)
	{
		printf("root=%f\n",x1);
		printf("no of iteration=%d\n",count);
	}
	else
	{
		x0=x1;
		count=count+1;
		goto begin;
	}
	return 0;
}
