#include <stdio.h>
using namespace std;

int a = 10;

int main()
{

    double b = c + a;
    a = 0;

    a = 5;

    printf("b = %f\n", b);

    for (int i = 0; i < 5; i++)
    {
        a = 11;
    }    

    if (a == 0)
    {
        printf("OK");
        for (int i = 0; i < 5; i++)
        {
            a = 11;
            if (i == 3)
            {
                a = a + i;
            }
        }
    }
    else
    {
        printf("ERROR: Should've became delivery guy");
    }

    for (int i = 0; i < 5; i++)
    {
        a = 11;
        if (i == 3)
        {
            a = a + i;
        }
    }

    while (a < 5)
    {
        printf(c);
        a -= 1;
    }

    c = 5;

    return 0;
}
