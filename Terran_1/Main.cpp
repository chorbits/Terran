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
 
    //반복문으로 제어: 유닛 생성
    for (int i = 0; i < MAX_UNIT_COUNT; i++) {
        cout << "생산할 유닛을 선택하세요 (1=마린, 2=탱크, 3=메딕) : ";
        cin >> choice;
        getchar();
 
        cout << "유닛의 이름을 입력하세요: ";
        cin >> name;
        getchar();
 
        for (int j = 0; j < i; j++) {
            while (name.compare(m[j]->getName()) == 0) {
                cout << "이미 사용 중인 이름입니다. 다른 이름을 입력해주십시오: ";
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
 
    //반복문 제어: 스킬 사용
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
