#pragma once
#include <iostream>

class TV {
private:
	int volume;
	int channel;

public:

	int vol(int _volume) {

		if (_volume <= 100 && _volume >= 0) {
			volume = _volume;
			return volume;
		}

		else return -1;
	}

	int chan(int _channel) {

		if (_channel <= 999 && _channel >= 1) {
			channel = _channel;
			return channel;
		}

		else return -1;
	}
};
