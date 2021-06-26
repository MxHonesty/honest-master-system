#pragma once
#include "../base/types.h"


/** Abstract Base Class for all the  
* Memory implementations.
*/
class Memory {
public:

	/** Reads the BYTE on the given position in memory. */
	virtual BYTE read(const int position) const = 0;

	/** Reads the WORD at the given position in memory.
		Orders the bytes according to little endian.
	*/
	virtual WORD read_word(const int position) const = 0;

	/** Writes the given BYTE at the given memory location */
	virtual void write(const BYTE data, const int position) = 0;
};
