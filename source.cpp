#include<stdio.h>
#include<stdlib.h>
int main()
{
    char week[3];
    int num_days;

    scanf("%s%d", week, &num_days);

    if ( strcmp( "mon", week)==0)
    {
        printf("%d ",(num_days +1)/7);
        printf("Hi");

    }
    else if ( strcmp( "tue", week) ==0 )
        printf("%d ",(num_days +2)/7);
    else if ( strcmp( "wed", week)==0 )
        printf("%d ",(num_days +3)/7);
    else if ( strcmp( "thu", week)==0 )
        printf("%d ",(num_days +4)/7);
    else if ( strcmp( "fri", week)==0 )
        printf("%d ",(num_days +5)/7);
    else if ( strcmp( "sat", week)==0 )
        printf("%d ",(num_days +6)/7);
    else
        printf("%d ", num_days/7);


    return EXIT_SUCCESS;
}
