#include <iostream>
#include "head.h"

using namespace std;

int main() {
	cout << "업&다운 게임입니다." << endl;
	cout << "기회는 총 5번이며, 범위는 1~100입니다." << endl;

	int enter;//답
	int i = 0;//기회

	cout << "답은?" << endl;

	while (true) {
		cout << "답은?" << endl;
		cin >> enter;
		if (enter > answer) {
			cout << "답 보다 값이 더 작습니다." << endl;
			i++;
		}
		if (enter < answer) {
			cout << "답보다 값이 더 큽니다." << endl;
			i++;
		}
		if (enter == answer) {
			cout << "정답입니다!" << endl;
			break;
		}
		if (i == 4) {
			cout << "기회를 다 쓰셨네요. " << endl;
			cout << "정답은" << answer << "이였습니다!" << endl;
			break;
		}
	}
}
