#pragma once
#include"Triangle.h"
#include"Vector.h"
#include<vector>
using namespace std;

class Mesh
{
public:
	double x1, y1, x2, y2;
	int mag;
	vector<Triangle> tri;
	vector<vec2> vtx;
public:
	Mesh(double _x1, double _y1, double _x2, double _y2,int _mag):x1(_x1),y1(_y1),x2(_x2),y2(_y2),mag(_mag)
	{
		Divide();
	}

	~Mesh()
	{

	}

	void Divide()
	{
		double l1, l2;
		l1 = x2 - x1;
		l2 = y2 - y1;
		/*double ed1, ed2;
		ed1 = l1 > l2 ? l2 / mag : l1 / mag;
		ed2;*/
		Triangle triangle;
		vec2 ve;
		double dif1 = l1 / mag, dif2 = l2 / mag;
		int numlu = 0, numrd = 0, numru = 0;

		double u, d, r, l;
		for (int i = 0; i < mag; i++)
		{
			d = dif1 * i;
			for (int j = 0; j < mag; j++)
			{
				r = dif2 * (j + 1);
				l = dif2 * j;
				triangle.setv(i, i + 1, i + mag);
				tri.push_back(triangle);
				triangle.setv(i + mag, i + mag + 1, i + 1);
				tri.push_back(triangle);
				ve.set(l, d);
				vtx.push_back(ve);
			}
			ve.set(r, d);
			vtx.push_back(ve);
			if (i == mag - 1)
			{
				u = dif1 * (i + 1);
				for (int j = 0; j < mag+1; j++)
				{
					l = dif2 * j;
					ve.set(l, u);
					vtx.push_back(ve);
				}
			}
		}
	}

	void CreateMatrix()
	{

	}
};