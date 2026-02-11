// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the year");
//     scanf("%d",&n);

//     if(n % 400 == 0)
//     {
//         printf("the year is leap year");
//     }    
//         else if (n % 100 == 0)
//         {
//         printf("the year is not a leap year");
//         }

//         else if (n % 4 == 0)
//         {
//         printf("the year is leap year");
//         }

    
//     else
//     {
//     printf("the year is not a leap year");
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",year);

    if(year%400==0)
    printf("%d is a leap year",year);
    else if (year%100==0)
    printf("%d is a not a leap year",year);
    else if (year %4==0)
    printf("%d is a leap year",year);

    else
    printf("%d is not leap year",year);
    return 0;
}