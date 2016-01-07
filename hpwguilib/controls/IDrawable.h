#ifndef IDRAWABLE_H_
#define IDRAWABLE_H_
#include <Adafruit_ILI9341.h>
#include "IControl.h"

namespace hpwguilib {
namespace controls {

class IDrawable : public virtual IControl {

public:
	virtual ~IDrawable() = 0;

public:
	virtual void draw() = 0;
	virtual bool overlapsRect(int16_t top, int16_t left, int16_t width, int16_t height) = 0;

};
} // end namespace controls
} // end namespace hpwguilib

#endif
