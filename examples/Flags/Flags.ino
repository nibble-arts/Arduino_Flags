/*
 * FLAGS example
 *
 * The flag library provides simple set and compare methods
 * for the 8 bits of a byte.
 *
 * With set() a complete byte is written, with get() the
 * byte is read.
 *
 * set_flag(n) sets the n-th bit
 * get_flag(n) is true, if the n-th bit is set
 *
 */


#include <flags.h>

// init flag byte
FLAGS flags;

void setup() {

	Serial.begin(115200);


	// set all flags to 0
	flags.set(0);

	Serial.print("empty flags: ");
	Serial.println(flags.get());

	flags.set_flag(2, true);
	flags.set_flag(5, true);

	Serial.print("bits 2 and 5 set: ");
	Serial.println(flags.get());

	flags.set_flag(2, false);
	flags.set_flag(3, true);

	Serial.print("reset bit 2 and set bit 3: ");
	Serial.println(flags.get());

	if (flags.get_flag(2)) {
		Serial.println("bit 2 is set");
	}
}


void loop() {

}