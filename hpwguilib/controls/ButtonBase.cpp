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

}
} /* namespace hpwguilib */
