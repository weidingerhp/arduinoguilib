#ifndef ICONTROL_H_
#define ICONTROL_H_
#include <Adafruit_ILI9341.h>
#include "IControl.h"

namespace hpwguilib {

class WindowManagement;

namespace controls {

class IControl {
protected:
	::hpwguilib::WindowManagement *windowManagement;

public:
	virtual ~IControl() = 0;

public:
	void setWindowManagement(::hpwguilib::WindowManagement *management) { windowManagement = management; }

};
} // end namespace controls
} // end namespace hpwguilib

#endif
