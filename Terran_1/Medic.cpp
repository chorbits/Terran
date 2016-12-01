#include <iostream>
#include <string>

#include "Terran.h"
#include "Medic.h"

using namespace std;

Medic::Medic(string name) : Terran(name, 300, 30, 50) {
	cout << "[Medic::" << this->getName() << "] ������" << endl;
}

void Medic::move() {
	cout << "[Medic::" << this->getName() << "] " << this->getSpeed() <<
		"�� �ӵ��� �̵���" << endl;
}

void Medic::attack() {
	cout << "[Medic::" << this->getName() << "] " << this->getPower() <<
		"��ŭ�� ü���� ġ����" << endl;
}

void Medic::restore() {
	cout << "[Medic::" << this->getName() << "] �Ʊ��� �̻���¸� ȸ���մϴ�..." << endl;
}

Medic::~Medic() {
	cout << "[Medic::" << this->getName() << "] �Ҹ��" << endl;
}