#include<iostream>
#include"bighead.h"

using namespace std;
protagonist mainC;
monster enemy;

void fight() {
	mainC.hp = mainC.hp - enemy.monsteratt(10);
	enemy.hp = enemy.hp - mainC.protagonistatt(50);
}

void Showfight() {
	cout << "플레이어의 체력은:" << mainC.hp << endl;
		cout << "몬스터의 체력은:" << enemy.hp << endl;
}

int main() {

	fight(); 
	fight(); 
	fight();
	

	Showfight();
}
