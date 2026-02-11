// wap to give grades according to percentage

#include<stdio.h>
int main()
{
    int pps,physics,ee,maths,evs;
    float sum,per;
    printf("enter the marks of pps");
    scanf("%d",&pps);
    printf("enter the marks of physics");
    scanf("%d",&physics);
    printf("enter the marks of ee");
    scanf("%d",&ee);
    printf("enter the marks of maths");
    scanf("%d",&maths);
    printf("enter the marks of evs");
    scanf("%d",&evs);

    sum=pps+physics+ee+maths+evs;
    per=(float)sum/5;

    if(per>=90 && per<=100)
    {
        printf("Grade A");

    }

    else if (per>=80&& per<90)
    {
        printf("Grade B");
    }

    else if (per>=70 && per<80)
    {
        printf("Grade C");
    }
    else if (per>=60&& per<70)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Baccha bekar hai ");
    }
}