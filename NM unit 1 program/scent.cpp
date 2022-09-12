//implement the program finds the roots using scent method::
#include<stdio.h>
#include<math.h>
#define f(x) x*x-4*x-10

int main()
{
	int count;
	float x0,x1,x2,eps,err,f0,f1,sagar;
	printf("enter two initial guess\n");
	scanf("%f %f",&x0,&x1);
	printf("enter tolerence error\n");
	scanf("%f",&eps);
	
	count=1;
	begin:
	f0=f(x0);
	f1=f(x1);
	sagar=(f1*(x1-x0))/(f1-f0);
	x2=x1-sagar;
	err=fabs((x2-x1)/x2);
	if(err<eps)
	{
		printf("root=%f\n",x2);
		printf("no of iteration=%d\n",count);
	}
	else
	{
		x0=x1;
		x1=x2;
		count=count+1;
		
		goto begin;
	}
	return 0;
}
