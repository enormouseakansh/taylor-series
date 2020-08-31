//It is an Example of Taylor Series of e^x
#include <stdio.h>
#include <stdlib.h>
double e (int x, int n);
int main()
{
   int x,n;
   double value;
   printf("Enter The Value of x: ");
   scanf("%d",&x);
   printf("Enter the Value till what Accuracy you want to print the Series: ");
   scanf("%d",&n);
   value = e(x,n);
   printf("Value of Taylor Series is %lf",value);
}
double e (int x, int n)
{
    static double p=1,f=1;
    double r;
    if (n==0)
    {
        return 1;
    }
    else
    {
        r= e(x,n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }

}
