//	 a Program to solve ODE by Using Eulers's method.
#include<stdio.h>
#include<conio.h>

#define f(x,y) 2*x+y

int main()
{
					 printf("\n\t\t(5.3)===================================================\n");
    printf("\t\tSagar Gautam\t\t Roll No: 25758/077\n ");
            printf("\t\tImplement ODE by Using Eulers's method  \n\n");
            system("color 71");
 float x0, y0, xn, h, yn, slope;
 int i, n;
 
 printf("Enter Initial Condition\n");
 printf("x0 = ");
 scanf("%f", &x0);
 printf("y0 = ");
 scanf("%f", &y0);
 printf("Step size h = \n");
 scanf("%f", &h);
 printf("Enter number of steps: ");
 scanf("%d", &n);

 /* Calculating step size (h) */
// h = (xn-x0)/n;

 /* Euler's Method */
 printf("\nx0\ty0\tslope\tyn\n");
 printf("------------------------------\n");
 for(i=0; i < n; i++)
 {
  slope = f(x0, y0);
  yn = y0 + h * slope;
  printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
  y0 = yn;
  x0 = x0+h;
 }

 /* Displaying result */
 printf("\nValue of y  =  %0.3f",yn);

 getch();
 return 0;
}

