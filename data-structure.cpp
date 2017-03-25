#include "data-structure.h"

tree::tree() {
	level = 0;
}

tree::tree(unsigned int level) {
	level = level;
}

void tree::makeDivisions() {
	std::vector <point *> q1; // quadrant 1 bodies
	std::vector <point *> q2; // quadrant 2 bodies
	std::vector <point *> q3; // quadrant 3 bodies
	std::vector <point *> q4; // quadrant 4 bodies

	// checking the position of the bodies and pushes into the
	// corresponding quadrant vector
	for (int i=0; i<points.size(); ++i) { 
		if (points[i]->x < (x + width/2)) {
			if (points[i]->y < (y + height/2)) {
				q1.push_back(points[i]);
			}
			else {
				q2.push_back(points[i]);
			}
		}
		else {
			if (points[i]->y < (y + height/2)) {
				q3.push_back(points[i]);
			}
			else {
				q4.push_back(points[i]);
			}
		}
	}
}