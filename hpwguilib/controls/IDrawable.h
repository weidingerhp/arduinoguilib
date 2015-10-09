#ifndef IDRAWABLE_H_
#define IDRAWABLE_H_
#include <Adafruit_ILI9341.h>

namespace hpwguilib {
namespace controls {

class IDrawable {

public:
	virtual ~IDrawable() = 0;

public:
	virtual void draw() = 0;

};
} // end namespace controls
} // end namespace hpwguilib

#endif
