#include<fstream>
#include<cstdio>
#include"Mesh.h"

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	printf("«Î ‰»Îx1,x2,y1,y2:\n");
	scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
	Mesh mesh(x1, y1, x2, y2, 10);
	return 0;
}