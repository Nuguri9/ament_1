#include <iostream>
#include "head.h"

using namespace std;

TV LG;

int main() {

	int inVol = 10;
	int inChan = 10;

	cout << "채널을 입력하세요:";
	cin >> inChan;

	if (true) {

		if (LG.chan(inChan) <= 100 && LG.chan(inChan) >= 0) {
			cout << "채널:" << LG.chan(inChan) << endl;
		}

		else cout << "Errorcode : 1" << endl;
	}

	cout << "볼륨을 입력하세요:";
	cin >> inVol;
	if (true) {

		if (LG.vol(inVol) <= 100 && LG.vol(inVol) >= 0) {
			cout << "볼륨:" << LG.vol(inVol) << endl;
		}

		else cout << "Errorcode : 1" << endl;
	}
}
