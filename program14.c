//wap to check if a char is alphabet,digit,or special character

#include<stdio.h>
int main()
{
    char ch ;
    printf("Enter a Chracter");
    scanf("%c",&ch);
    
    if((ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z'))
    {
        printf("The Character is an Alphabet");
    }
    
    if(ch>='1'&& ch<='9')
    {
        printf("the character is an integer");
        
    
    }
    
    else
    {
        printf("the character is a special character");
        
    }
    
    
    
    return 0;
}