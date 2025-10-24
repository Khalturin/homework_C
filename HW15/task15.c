#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 4

/*
Уравнение прямой
	Определить уравнение прямой по координатам двух точек. Уравнение вида
	y=k*x+b

Формат входных данных
	Четыре целых числа через пробел. Координаты X1 Y1 X2 Y2
Формат результата
	Два числа K,B в формате "%.2f %.2f"
*/

struct Point{
	int x;
	int y;
};	

int main(){
	struct Point point1;
	struct Point point2;
	scanf("%d %d %d %d", &point1.x, &point1.y, &point2.x, &point2.y);
//	printf("%d %d %d %d\n", point1.x, point1.y, point2.x, point2.y);
	float k = (float)(point1.y - point2.y) / (float)(point1.x - point2.x);
	float b = point1.y - k * point1.x;
	

	printf("%.2f %.2f\n", k, b);

	return EXIT_SUCCESS;
}
