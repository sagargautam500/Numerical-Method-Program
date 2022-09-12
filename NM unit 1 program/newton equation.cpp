//implemention the program of two equation by using Newton Raphson method::
#include<stdio.h>
#include<math.h>
#define f(x,y) x*x+x*y-6
#define g(x,y) x*x-y*y-3
#define a(x,y) 2*x+y
#define b(x) x
#define c(x) 2*x
#define d(y) -2*y

int main()
{
	int count;
	float f,g,f1,f2,g1,g2,D,Dx,Dy,x0,x1,y0,y1,eps,err1,err2;
	printf("enter two initial guess\n");
	scanf("%f %f",&x0,&y0);
	printf("enter tolerence error\n");
	scanf("%f",&eps);
	count=1;
	begin:
	f=f(x0,y0);
	g=g(x0,y0);
	f1=a(x0,y0);
	f2=b(x0);
	g1=c(x0);
	g2=d(y0);
	Dx=(f*g2-g*f2);
	Dy=(g*f1-f*g1);
	D=(f1*g2-g1*f2);
	x1=x0-(Dx/D);
	y1=y0-(Dy/D);
	err1=fabs((x1-x0)/x1);
	err2=fabs((y1-y0)/y1);
	if(err1<eps||err2<eps)
	{
		printf("roots are=%f,%f\n",x1,y1);
		printf("no of iteration=%d",count);
	}
	else
	{
		x0=x1;
		y0=y1;
		count=count+1;
		goto begin;
	}
	return 0;
}