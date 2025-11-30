#include<stdio.h>
struct Point
{
	int x;
	int y;
};
int main(int argc, char** argv)
{
	int n;
	scanf("%d", &n);
	struct Point points[100];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &points[i].x, &points[i].y);

	int max_index = 0;
	long long max_distance = 0;
	for (int i = 0; i < n; i++)
	{
		long long distance = (long long)points[i].x * points[i].x + (long long)points[i].y * points[i].y;
		if (distance > max_distance)
		{
			max_distance = distance;
			max_index = i;
		}
	}
		printf("%d %d", points[max_index].x, points[max_index].y);
		return 0;
}
