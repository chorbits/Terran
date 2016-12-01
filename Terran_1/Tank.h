#ifndef Tank_h
#define Tank_h

#include <string>
#include "Terran.h"

using namespace std;

class Tank : public Terran {
public:

	Tank(string name);

	~Tank();


	virtual void move();
	virtual void attack();

	void siegeMode();
};

#endif
