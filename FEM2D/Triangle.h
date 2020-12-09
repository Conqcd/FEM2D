#pragma once

class Triangle
{
public:
	unsigned int vid[3];
public:
	Triangle()
	{
		vid[0] = vid[1] = vid[2] = -1;
	}

	Triangle(unsigned int v1, unsigned int v2, unsigned int v3)
	{
		setv(v1, v2, v3);
	}

	Triangle(unsigned int _v[3])
	{
		setv(_v);
	}

	void setv(unsigned int v1, unsigned int v2, unsigned int v3)
	{
		vid[0] = v1; vid[1] = v2; vid[2] = v3;
	}

	void setv(unsigned int _v[3])
	{
		vid[0] = _v[0]; vid[1] = _v[1]; vid[2] = _v[2];
	}

	~Triangle()
	{

	}
};