#ifndef Medic_h
#define Medic_h

#include <string>
#include "Terran.h"

using namespace std;

class Medic : public Terran {
public:
	Medic(string name);

	virtual void move();
	virtual void attack();

	void restore();

	~Medic();
};

#endif