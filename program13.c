//wap to find roots of quadratic equation

#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c,z,y,dis;
    printf("Enter Value Of a=");
    scanf("%f",&a);
    printf("Enter The Value Of b=");
    scanf("%f",&b);
    printf("Enter The Constant Term=");
    scanf("%f",&c);

    dis=b*b-4*a*c;
    
    printf("the Value of d is=%f",dis);

    if (dis>0)
    {
        z=-b+sqrt(dis)/(2*a);
        y=-b-sqrt(dis)/(2*a);

        printf("The roots are %f\n%f",z,y);
        


    }
    else if (dis==0)
    {
    z=-b/2*a;
    printf("the roots are %f",z);
    }
    
    else
    {
        printf("the roots are imaginary");
    }
    return 0;



}

