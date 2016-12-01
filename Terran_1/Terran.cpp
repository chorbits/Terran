#include <iostream>
#include <string>

#include "Terran.h"

using namespace std;
Terran::Terran(string _n, int _h, int _s, int _p) {
	this->name = _n;
	this->hp = _h;
	this->speed = _s;
	this->power = _p;
}

string Terran::getName() { return this->name; }
int Terran::getHP() { return this->hp; }
int Terran::getSpeed() { return this->speed; }
int Terran::getPower() { return this->power; }

void Terran::move() {
	cout << endl;
}

void Terran::attack() {
	cout << endl;
}

Terran::~Terran() {
	cout << "[Terran::" << this->getName() << "] ¼Ò¸êµÊ" << endl;
}