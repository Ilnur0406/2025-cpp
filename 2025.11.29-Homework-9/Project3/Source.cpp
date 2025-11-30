#include <stdio.h>
#include <math.h>

typedef struct 
{
    int x, y;
} Point;

double distance(Point a, Point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(int argc, char** argv)
{
    int n;
    scanf("%d", &n);

    Point points[100];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double max_dist = 0.0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            double dist = distance(points[i], points[j]);
            if (dist > max_dist) 
            {
                max_dist = dist;
            }
        }
    }

    printf("%.15lf\n", max_dist);

    return 0;
}