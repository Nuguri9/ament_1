#pragma once
#include <iostream>
#include <random>

using namespace std;


	random_device randomum;

	mt19937 mt(randomum());

	uniform_int_distribution<int> range(1, 100);

	auto answer = range(randomum);
