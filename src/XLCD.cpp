#include "XLCD.h"

bool XLCD::begin() {
	pinMode(SDA, INPUT_PULLUP);
	pinMode(SCL, INPUT_PULLUP);
	TWBR = 72;
	TWSR = 0;			
}
