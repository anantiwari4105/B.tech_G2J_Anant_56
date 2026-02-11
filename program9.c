






// wap to find greatest of three numbers

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);

    if(a>b)
    {
        if (a>c)
        {
            printf("a=%d is greatest",a);
        }
        else{
            printf("c=%d is greatest",c);
        }
    }

    else if (b>c)
    {
        printf("b=%d is the greatest number ",b);

    }
    else 
    printf("c=%d is the greatest number ",c );
}
