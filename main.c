#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first_name[52];
    char middle_initials[52];
    char last_name[52];

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your middle initials: ");
    scanf("%s", middle_initials);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Your full name is %s %s %s", first_name, middle_initials, last_name);


    return 0;
}
