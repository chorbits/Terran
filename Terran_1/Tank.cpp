#include <iostream>
#include <string>
#include "Terran.h"
#include "Tank.h"

using namespace std;


Tank::Tank(string name) : Terran(name, 300, 20, 75) {
	cout << "[Tank::" << this->getName() << "] 생성됨" << endl;
}


Tank::~Tank() {
	cout << "[Tank::" << this->getName() << "] 소멸됨" << endl;
}

void Tank::move() {
	cout << "[Tank::" << this->getName() << "] " << this->getSpeed() << "의 속도로 이동함" << endl;
}

void Tank::attack() {
	cout << "[Tank::" << this->getName() << "] " << this->getPower() << "의 힘으로 공격함" << endl;
}

void Tank::siegeMode() {
	cout << "[Tank::" << this->getName() << "] 시즈모드 가동" << endl;
}