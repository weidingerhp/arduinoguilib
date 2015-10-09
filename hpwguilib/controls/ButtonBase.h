/*
 * ButtonBase.h
 *
 *  Created on: 09.10.2015
 *      Author: hape
 */

#ifndef BUTTONBASE_H_
#define BUTTONBASE_H_
#include <Adafruit_ILI9341.h>
#include "IDrawable.h"
#include "IClickable.h"

namespace hpwguilib {
namespace controls {

class ButtonBase : IDrawable {
protected:
	int16_t _x;
	int16_t _y;
	int16_t _width;
	int16_t _height;

	int16_t bgColor;
	int16_t fgColor;

public:
	virtual ~ButtonBase();

protected:
	ButtonBase(int16_t x, int16_t y, int16_t width, int16_t height);

public:

	int16_t x() const {return _x;}
	int16_t y() const {return _y;}
	int16_t width() const {return _width;}
	int16_t height() const {return _height;}

};

}

} /* namespace hpwguilib */

#endif /* BUTTONBASE_H_ */
