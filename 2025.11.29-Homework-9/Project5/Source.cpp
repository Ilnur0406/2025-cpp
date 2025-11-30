#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
    char surname[50], name[50];
    int math, physics, informatics;
    double sum_math = 0, sum_physics = 0, sum_informatics = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", surname, name, &math, &physics, &informatics);
        sum_math += math;
        sum_physics += physics;
        sum_informatics += informatics;
    }

    printf("%.6g %.6g %.6g\n", sum_math / n, sum_physics / n, sum_informatics / n);
    return 0;
}