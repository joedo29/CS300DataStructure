/*
 * Point.h
 *
 *  Created on: Oct 6, 2017
 *      Author: joedo
 */

#ifndef POINT_H_
#define POINT_H_
#include <iostream>
using namespace std;

class Point{
	int x, y;
public:
	Point(int x = 0, int y = 0){
		this -> x = x;
		this -> y = y;
	}
// faster way to create setter and getter is to:
// right click > source > generate getter and setter > select all check box
	int getX() const {
		return x;
	}

	void setX(int x) {
		this->x = x;
	}

	int getY() const {
		return y;
	}

	void setY(int y) {
		this->y = y;
	}
};


#endif /* POINT_H_ */
