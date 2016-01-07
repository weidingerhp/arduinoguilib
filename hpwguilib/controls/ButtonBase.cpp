/*
 * ButtonBase.cpp
 *
 *  Created on: 09.10.2015
 *      Author: hape
 */

#include "ButtonBase.h"
#include <Adafruit_ILI9341.h>

namespace hpwguilib {
namespace controls {

ButtonBase::~ButtonBase() {
	// TODO Auto-generated destructor stub
}
ButtonBase::ButtonBase(int16_t x, int16_t y, int16_t width, int16_t height) : _x(x), _y(y), _width(width), _height(height), bgColor(ILI9341_LIGHTGREY), fgColor(ILI9341_BLACK) {
}


// from IClickable
void ButtonBase::click() {
}

void ButtonBase::touchDown() {
}

void ButtonBase::touchUp() {
}

bool ButtonBase::isInClickRange(int16_t x, int16_t y) {
	return (x >= _x && y>=_y && x<= (_x + _width) && y <= (_y + _height));
}

// from IDrawable
void ButtonBase::draw() {
}

bool ButtonBase::overlapsRect(int16_t top, int16_t left, int16_t width, int16_t height) {
	if ((left + width) < _x)  return false;
	if (left > (_x + _width)) return false;
	if ((top + height) < _y)  return false;
	if (top > (_y + _height)) return false;
	return true;
}

}
} /* namespace hpwguilib */
