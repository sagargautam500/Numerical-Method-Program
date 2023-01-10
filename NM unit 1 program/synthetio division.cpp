//C Program to Evaluate Polynomial using synthetio division method  
//Bn-1=An+x*Bn;where Bn=0;

#include <stdio.h>
#include<math.h>

int main()
{
     float a[100],b[100],sum=0,x;
     int n,i;

     printf("\nEnter degree of the polynomial X = ");
     scanf("%d",&n);
     printf("\nEnter coefficient's of the polynomial X= \n");
     for(i=n;i>=0;i--)
     {
            printf("\nEnter Coefficient of [ X^%d ]= ",i);
            scanf("%f",&a[i]);
     }

     printf("\nEnter the value of X=  ");
     scanf("%f",&x);

     for(i=n;i>=0;i--)
     {
        sum=(a[i]+sum*x);
        // printf("\n\nSum is %.4f\n\n",sum);
        
         b[i]=sum;
          printf("\t%.4f", b[i]);
     }



     printf("\nValue of the polynomial is = [ %.5f ]\n",sum);

     return 0;
}
