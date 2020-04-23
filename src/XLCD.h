#pragma once

#include "Arduino.h"
#include "HD44780_commands.h"

class XLSD {
	public:
	XLCD(uint8_t adrees = defAdrees, );
	bool begin();
	private:
	
}
