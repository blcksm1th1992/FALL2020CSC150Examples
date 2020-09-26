#include <stdio.h>

int main()
{
    int i, cornProfit, cornCost, years; 
    int records[i];

    printf("Robco Corn Seller 10 year overiview\n");

    puts("How many records to show?");
    scanf("%d", &years);

// input 
   /* for(i=0; i < years; i++)
    {
        puts("CornProfits by year:");
        scanf("%d", &records[i]);
    } */
// processing
    cornCost = 500; 
    cornProfit = 500;


    for ( i = 0; i < years; i++)
    {

        if ( cornCost < cornProfit )
        {
            printf("Entry %d is In the Black \n", i);
        }
        else if ( cornCost > cornProfit)
        {
            printf("Entry %d is in the Red \n", i);
        }
        else
        {
            printf(" %d broke even \n", i);
        }
        //cornCost++; 
        //cornProfit--;

        cornCost = cornCost * 1.25;
        cornProfit = cornProfit * .75;
    }

// output
   /* for (i = 0; i < years; i++)
    {
        //printf("Returning Profits: %d\n", records[i]);
    } */

    return 0; 
}