#include <iostream>
#include <string>

#include "Marine.h"
#include "Tank.h"
#include "Terran.h"
#include "Medic.h"

#define MAX_UNIT_COUNT 5

using namespace std;

int main() {

	Terran *m[MAX_UNIT_COUNT] = { NULL };

	int choice;
	string name;

	//�ݺ������� ����: ���� ����
	for (int i = 0; i < MAX_UNIT_COUNT; i++) {
		cout << "������ ������ �����ϼ��� (1=����, 2=��ũ, 3=�޵�) : ";
		cin >> choice;
		getchar();

		cout << "������ �̸��� �Է��ϼ���: ";
		cin >> name;
		getchar();

		for (int j = 0; j < i; j++) {
			while (name.compare(m[j]->getName()) == 0) {
				cout << "�̹� ��� ���� �̸��Դϴ�. �ٸ� �̸��� �Է����ֽʽÿ�: ";
				cin >> name;
			}
		}

		if (choice == 1) {
			m[i] = new Marine(name);
		}
		else if (choice == 2) {
			m[i] = new Tank(name);
		}
		else if (choice == 3) {
			m[i] = new Medic(name);
		}
	}

	cout << "-------------------------------" << endl;

	//�ݺ��� ����: ��ų ���
	for (int i = 0; i < MAX_UNIT_COUNT; i++) {
		m[i]->move();
		m[i]->attack();

		Marine *temp1 = dynamic_cast<Marine*>(m[i]);
		if (temp1 != NULL) {
			temp1->steampack();
		}

		Tank *temp2 = dynamic_cast<Tank*>(m[i]);
		if (temp2 != NULL) {
			temp2->siegeMode();
		}

		Medic *temp3 = dynamic_cast<Medic*>(m[i]);
		if (temp3 != NULL) {
			temp3->restore();
		}

	}

	for (int i = 0; i < MAX_UNIT_COUNT; i++) {
		delete m[i];
	}

	getchar();
	getchar();
	return 0;
}