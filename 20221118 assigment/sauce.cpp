#include <iostream>
#include "Coordinate.h"
#include "Inverse.h"

using namespace std;

int main() {
	int x, y;

	cout << "함수의 좌표와 역함수 좌표 거리의 제곱을 구해봅시다." << endl;
	cout << "좌표를 입력해주세요" << endl;
	cin >> x >> y;

	pt.x = x;
	pt.y = y;

	swap(pt.x, pt.y);
	int dis2 = (pt.x - pt.y) * (pt.x - pt.y) + (pt.y - pt.x) * (pt.y - pt.x);
	cout << "d^2 값은 " << dis2 << endl;

	
	int dis2_pointer = (pt.x - x) * (pt.x - x) + (pt.y - y) * (pt.y - y);
	cout << "d^2 값은" << dis2_pointer << endl;
}
