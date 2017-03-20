
#include <stdio.h>

int main(void)
{
    int leap;

    printf("Type int: ");
    scanf("%d",&leap);

    if(leap%4 == 0)
    {
        if( leap%100 == 0)
        {
            
            if ( leap%400 == 0)
                printf("%d is a leap year.\n", leap);
            else
                printf("%d is not a leap year.\n", leap);
        }
        else
            printf("%d is a leap year.\n", leap);
    }
    else
        printf("%d is not a leap year.\n", leap);
    
    return 0;
}
