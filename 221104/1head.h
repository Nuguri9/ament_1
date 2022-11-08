#pragma once
#include <iostream>
#define print cout

using namespace std;

class Sound {
private:
	int Vol;
public:
	int TvVol(int t) {

		Vol = t;
		return Vol;
	}
};
