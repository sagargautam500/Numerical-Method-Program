#include<stdio.h>
#include<conio.h>


int main()
{
 int n, i;
 float x[20], y[20], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b,x0,y0;
 	 printf("\nName:Sagar Gautam\n");
	 printf("\n");
 printf("number of data points\n");
 scanf("%d", &n);
 printf("Enter data:\n");
 for(i=1;i<=n;i++)
 {
  printf("x[%d]=",i);
  scanf("%f", &x[i]);
  printf("y[%d]=",i);
  scanf("%f", &y[i]);
 }
 for(i=1;i<=n;i++)
 {
  sumX = sumX + x[i];
  sumX2 = sumX2 + x[i]*x[i];
  sumY = sumY + y[i];
  sumXY = sumXY + x[i]*y[i];
 }
 b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
 a = (sumY - b*sumX)/n;
 
 printf("Values are: a=%0.2f and b = %0.2f",a,b);
 printf("\nEquation of best fit is: y = %0.2f + %0.2fx",a,b);
 printf("\n");
 printf("enter the value of x\n");
 scanf("%f",&x0);
 y0=(b*x0)+a;
 printf("the value of y is %f",y0);
 getch();
 return(0);
}