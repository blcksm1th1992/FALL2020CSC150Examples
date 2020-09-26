#include <stdio.h> 
//#inlude <stdlib.h>
//#inlude <string.h>
//#include <time.h>


int main()
{
    // What is your name, What is your major, What is your favorite color, What is your favorite movie
    char name[10], _major[20], color[20], movie[20];
    int beacom;

    printf("What is your name? \n");
    scanf("%s", name);

    printf("What is you major? \n");
    scanf("%s", _major);

    printf("What is your Favorite Color?\n");
    scanf("%s", color);

    printf("What is your favorite movie \n");
    scanf("%s", movie);

    puts("__________________________________________________________________");

    printf("Name: %s \nMajor: %s \nColor: %s \nMovie: %s \n", name, _major, color, movie);

    puts("__________________________________________________________________");

    printf("Is your major in the Beacom Building? (1 = Yes && 0 = No) \n");
    scanf("%d", &beacom); 

    if ( beacom == 1)
    {puts("The you might qualify for DSU Rising Scholarship!! ");}

    else if (beacom == 0)
    {puts("You probably are at DSU for English Education");}

    else
    {puts("ERROR 404: Page Not Webpage Not Found");}
    
    return 0;
}