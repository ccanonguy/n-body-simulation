#include <vector>

struct point { // stores the information about a particular mass
	float x, y;
	float vx, vy;
	float fx, fy;
	float mass;
};

class tree { // stores the information about the space
public:
	std::vector <point *> points;
	std::vector <tree *> children;

	float totalMass; // total mass contained in the tree
	float x, y;	// position of top left corner of the tree
	float width, height; // width and height of the space

	// debugging purposes
	unsigned int level; // depth of the tree

	tree();
	tree(unsigned int level);
	void makeDivisions();
	void initTree(std::vector <point *> points, float width, float height, float x, float y);
};