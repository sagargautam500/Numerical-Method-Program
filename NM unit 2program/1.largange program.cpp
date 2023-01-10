#include<stdio.h>
#include<conio.h>

int main()
{
	 float x[10], y[10], xp, v=0, l=1;
	 int i,j,n;
	 printf("\nName:Sagar Gautam\n");
	 printf("\n");
	 printf("Enter number of data: ");
	 scanf("%d", &n);
	 printf("Enter data:\n");
	 for(i=1;i<=n;i++)
	 {
		  printf("x[%d] = ", i);
		  scanf("%f", &x[i]);
		  printf("y[%d] = ", i);
		  scanf("%f", &y[i]);
	 }
	 printf("Enter interpolation point: ");
	 scanf("%f", &xp);
	 for(i=1;i<=n;i++)
	 {
		  
		  for(j=1;j<=n;j++)
		  {
			   if(i!=j)
			   {
			    	l = l* (xp - x[j])/(x[i] - x[j]);
			   }
		  }
		  v = v + l * y[i];
	 }
	 printf("Interpolated value at %.3f is %.3f.", xp, v);
	 getch();
}
