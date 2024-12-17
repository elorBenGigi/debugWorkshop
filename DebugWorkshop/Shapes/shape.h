#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
private:
	float _area;
	float _perimeter;

public:
	Shape();
	// signature of shape and triangle get_area function weren't the same,
	// so when getting area, it went to shape by default instead of traingle
	virtual float get_area(bool has_depth = false) const;

};

#endif	// __SHAPE_H__