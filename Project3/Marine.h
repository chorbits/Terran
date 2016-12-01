#ifndef Marine_h
#define Marine_h

#include <string>
#include "Terran.h"

using namespace std;

class Marine : public Terran {
public:
	
	Marine(string name);
	~Marine();

	virtual void move();
	virtual void attack();

	void steampack();
};

#endif