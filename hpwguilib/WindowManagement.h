/*
 * WindowManagement.h
 *
 *  Created on: 19.09.2015
 *      Author: hape
 */

#ifndef WINDOWMANAGEMENT_H_
#define WINDOWMANAGEMENT_H_

#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <Adafruit_STMPE610.h>

namespace hpwguilib {

class WindowManagement {
protected:
	static Adafruit_STMPE610 ts;
	static Adafruit_ILI9341 tft;

	int height;
	int width;
	bool isRotated;
	bool touchdown;
	uint16_t backgroundColor = ILI9341_WHITE;


private:
	static WindowManagement* instance;

private:
	WindowManagement();
public:
	virtual ~WindowManagement();

	static WindowManagement* setup() {
		if (!instance) {
			instance = new WindowManagement();
		}

		return instance;
	}

	void loop();
};

} /* namespace hpwguilib */

#endif /* WINDOWMANAGEMENT_H_ */
