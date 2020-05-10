/*
 * LOCO-CAN LOCO status class header
 * 
 * @author: Thomas H Winkler
 * @copyright: 2020
 * @lizence: GG0
 */



#ifndef FLAGS_H
#define FLAGS_H


#include <Arduino.h>


class FLAGS {

	public:
		FLAGS::FLAGS();
		void begin(void);

		void set(uint8_t data); // set complete byte
		uint8_t get(void); // get status byte

		void set_flag(uint8_t bit, bool value); // set bit of _flags to value
		bool get_flag(uint8_t bit);

	private:
		uint8_t _flags; // stati

};


#endif