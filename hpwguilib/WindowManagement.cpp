/*
 * WindowManagement.cpp
 *
 *  Created on: 19.09.2015
 *      Author: hape
 */

#include "WindowManagement.h"

namespace hpwguilib {
// This is calibration data for the raw touch data to the screen coordinates
#define TS_MINX 150
#define TS_MINY 130
#define TS_MAXX 3800
#define TS_MAXY 4000


#define STMPE_CS 8
Adafruit_STMPE610 WindowManagement::ts = Adafruit_STMPE610(STMPE_CS);
#define TFT_CS 10
#define TFT_DC 9
Adafruit_ILI9341 WindowManagement::tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

WindowManagement * WindowManagement::instance = NULL;

WindowManagement::WindowManagement() {
	tft.begin();
	ts.begin();
	height = tft.height();
	width = tft.width();

	isRotated = false;
	touchdown = false;
	// paint the initial background
	  tft.fillScreen(ILI9341_WHITE);
}

WindowManagement::~WindowManagement() {
}

void WindowManagement::loop() {
	if (!ts.bufferEmpty()) {
		uint16_t tmp_x, tmp_y;
		uint8_t tmp_z;
		// touch detected
		int skips = ts.bufferSize();
		for (; skips > 0; skips--)
			ts.readData(&tmp_x, &tmp_y, &tmp_z);
		TS_Point p = ts.getPoint();
	    p.x = map(p.x, TS_MINY, TS_MAXY, 0, tft.height());
	    p.y = map(p.y, TS_MINX, TS_MAXX, 0, tft.width());
	    int y = isRotated ? (tft.height() - p.x) : p.y;
	    int x = isRotated ? p.y : p.x;
	}
}

} /* namespace hpwguilib */
