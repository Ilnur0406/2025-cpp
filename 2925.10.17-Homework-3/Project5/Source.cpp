#include <stdio.h>

int main()
{
    int a = 0;
    int m1 = -1;
    int m2 = -1;

    do
    {
        scanf_s("%d", &a);

        if (a != 0)
        {
            if (a > m1)
            {
                m2 = m1;
                m1 = a;
            }
            else if (a < m1 && (a > m2 || m2 == -1))
            {
                m2 = a;
            }
        }

    } while (a != 0);

    printf("%d", m2);

    return 0;
}