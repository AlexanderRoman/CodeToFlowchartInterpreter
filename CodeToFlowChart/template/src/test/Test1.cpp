#include <stdio.h>
using namespace std;

int a = 10;

int main()
{
    double c = 1.256;

    double b = c + a;

    a = 0;

    printf("b = %f\n", b);
    scanf("%d", a);

    if (a == 0)
    {
        printf("It Works!");
        if (b == 0)
        {
            printf("Something went terribly wrong!");
        }
    }
    else
    {
        printf("Oh Oooh");
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Nice ");
    }

    while (a < 1510)
    {
        scanf("%d", a);
    }

    return 0;
}