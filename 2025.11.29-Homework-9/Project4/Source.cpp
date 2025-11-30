#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x, y;
} Point;

double distance(Point a, Point b) 
{
    return hypot(a.x - b.x, a.y - b.y);
}

int is_triangle(double a, double b, double c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);
    if (n < 3 || n > 100)
    {
        return 1;
    }

    Point points[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_perimeter = 0.0;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                double a = distance(points[i], points[j]);
                double b = distance(points[j], points[k]);
                double c = distance(points[k], points[i]);

                if (is_triangle(a, b, c))
                {
                    double perimeter = a + b + c;
                    if (perimeter > max_perimeter)
                    {
                        max_perimeter = perimeter;
                    }
                }
            }
        }
    }

    printf("%.15lf\n", max_perimeter);

    return 0;
}