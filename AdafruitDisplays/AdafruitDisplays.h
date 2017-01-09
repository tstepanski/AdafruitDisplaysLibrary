#ifndef Adafruit_LEDBackpack_h
#define Adafruit_LEDBackpack_h

#if (ARDUINO >= 100)
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include <Wire.h>

#include "Adafruit_GFX.h"
#include <cstdint>

#define LED_ON 1
#define LED_OFF 0

#define LED_RED 1
#define LED_YELLOW 2
#define LED_GREEN 3

#define HT16K33_BLINK_CMD 0x80
#define HT16K33_BLINK_DISPLAYON 0x01
#define HT16K33_BLINK_OFF 0
#define HT16K33_BLINK_2HZ  1
#define HT16K33_BLINK_1HZ  2
#define HT16K33_BLINK_HALFHZ  3

#define HT16K33_CMD_BRIGHTNESS 0xE0

#define SEVENSEG_DIGITS 5

class EightByEightMatrix : public Adafruit_GFX
{
	public:
		explicit EightByEightMatrix(uint8_t address);
		void paint();
		void clear();
		void setBrightness(uint8_t level);
		void drawPixel(uint16_t x, uint16_t y);
		void drawLetter(char letter);
};