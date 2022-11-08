#pragma once
#include <iostream>

using namespace std;

class protagonist { 
private:
	int att;//50
public:
	int hp = 100;

	int protagonistatt(int	t) {

		att = t;
		return att;
	}
};

class monster {
private:
	int att;//10
public:
	int hp = 200;

	int monsteratt(int t) {

		att = t;
		return att;
	}
};
