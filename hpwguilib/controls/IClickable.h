#ifndef ICLICKABLE_H_
#define ICLICKABLE_H_
#include <Adafruit_ILI9341.h>

namespace hpwguilib {
namespace controls {

class IClickable {

public:
	virtual ~IClickable() = 0;

public:
	virtual void click() = 0;
	virtual void touchDown() = 0;
	virtual void touchUp() = 0;

};
} // end namespace controls
} // end namespace hpwguilib

#endif
