//Implement the program finds the roots using bisection method::
#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x-9

int main()
{
			 printf("\n\t\t(1.1)===================================================\n");
    printf("\t\tSagar Gautam\t\t Roll No: 25758/077\n ");
            printf("\t\tfinds the roots using bisection method\n\n");
	int count;
	float x0,x1,f1,f2,eps,err,root,m,fm;
	printf("enter two initial guesses\n");
	scanf("%f %f",&x0,&x1);
	printf("enter the tolerance error\n");
	scanf("%f",&eps);
	
	count=1;
	begin:
	f1=f(x0);
	f2=f(x1);
	if(f1*f2>0)
	{
		printf("\n root is not lies in this given point \n");
	}
	else
	{
	m=(x0+x1)/2;
	fm=f(m);
	if(f1*fm<0)
	{
		x1=m;
		f2=fm;
	}
	else
	{
		x0=m;
		f1=fm;
	}
	err=(x1-x0)/x1;
	if(err<eps)
	{
		root=(x0+x1)/2;
		printf("root=%f\n",root);
		printf("no of iteration=%d",count);
	}
	else
	{
		count=count+1;
	goto begin;	
	}
	}
	return 0;
}
