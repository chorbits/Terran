#include <iostream>
#include <string>
#include "Terran.h"
#include "Marine.h"

using namespace std;


Marine::Marine(string name) : Terran(name, 100, 50, 20) {
	cout << "[Marine::" << this->getName() << "] »ý¼ºµÊ" << endl;
}

Marine::~Marine() {
	cout << "[Marine::" << this->getName() << "] ¼Ò¸êµÊ" << endl;
}


void Marine::move() {
	cout << "[Marine::" << this->getName() << "] " << this->getSpeed() << "ÀÇ ¼Óµµ·Î ÀÌµ¿ÇÔ" << endl;
}

void Marine::attack() {
	cout << "[Marine::" << this->getName() << "] " << this->getPower() << "ÀÇ ÈûÀ¸·Î °ø°ÝÇÔ" << endl;
}

void Marine::steampack() {
	cout << "[Marine::" << this->getName() << "] ½ºÆÀÆÑ ÀÛµ¿ÇÔ" << endl;
}