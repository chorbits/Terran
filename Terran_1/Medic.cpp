#include <iostream>
#include <string>

#include "Terran.h"
#include "Medic.h"

using namespace std;

Medic::Medic(string name) : Terran(name, 300, 30, 50) {
	cout << "[Medic::" << this->getName() << "] 생성됨" << endl;
}

void Medic::move() {
	cout << "[Medic::" << this->getName() << "] " << this->getSpeed() <<
		"의 속도로 이동함" << endl;
}

void Medic::attack() {
	cout << "[Medic::" << this->getName() << "] " << this->getPower() <<
		"만큼의 체력을 치유함" << endl;
}

void Medic::restore() {
	cout << "[Medic::" << this->getName() << "] 아군의 이상상태를 회복합니다..." << endl;
}

Medic::~Medic() {
	cout << "[Medic::" << this->getName() << "] 소멸됨" << endl;
}