#include <stdio.h>

int main ()
{
     char chacterName[10] = "Frodo";
     int i, years, corrupt = 0;

    printf("\n %s, how many years do you wait to take the Ring to Mordor?\n", chacterName);
    scanf("%d", &years );

    while ( i < years)
    {
        puts("Eating Elevsies");

        corrupt = corrupt + 3; 
        i++; 
    }

    if ( corrupt <= 50 )
    {
        printf("Taking the Hobbits to Isengard!!!\n");
        printf("Warning: %s is %d %% corrupted by the ring\n", chacterName, corrupt);
    } 
    else if (corrupt > 50 && corrupt <= 60)
    {
        printf("You are to far gone hand someone else the ring \n");
    }
    else if ( corrupt > 60)
    {
        puts("You run off with the voices and join Smeagol");
    }
    /* do 
    {

    } while ();
    */ 


    return 0;
}