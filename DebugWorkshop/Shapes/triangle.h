#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "shape.h"

class Triangle : public Shape
{
private:
	float _base;
	float _height;
public:
	Triangle(float base, float height);
	virtual float get_area(bool has_depth = false) const;

};


#endif	// __TRIANGLE_H__