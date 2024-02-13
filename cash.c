#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;

    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);

    if (change % 25 == 0)
    {
        int a1 = change / 25;
        printf("%i\n", a1);
    }
    else if (change % 25 % 10 == 0)
    {
        int a1 = change / 25;
        int a2 = change % 25 / 10;
        printf("%i\n", a1 + a2);
    }
    else if (change % 25 % 10 % 5 == 0)
    {
        int a1 = change / 25;
        int a2 = change % 25 / 10;
        int a3 = change % 25 % 10 / 5;
        printf("%i\n", a1 + a2 + a3);
    }
    else
    {
        int a1 = change / 25;
        int a2 = change % 25 / 10;
        int a3 = change % 25 % 10 / 5;
        int a4 = change % 25 % 10 % 5 / 1;
        printf("%i\n", a1 + a2 + a3 + a4);
    }
}
