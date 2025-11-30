#include <stdio.h>
struct Point
{
	double x;
	double y;
};
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	struct Point points[100];
	double sum_x = 0.0, sum_y = 0.0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf", &points[i].x, &points[i].y);
		sum_x += points[i].x;
		sum_y += points[i].y;
	}
	double center_x = sum_x / n;
	double center_y = sum_y / n;
	printf("%.15lf %.15lf\n", center_x, center_y);
	return 0;
}