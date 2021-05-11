#pragma once
#include "../base/types.h"


/** Abstract Base Class for all the  
* Memory implementations.
*/
class Memory {
public:

	/** Reads the BYTE on the given position in memory. */
	virtual BYTE read(const int position) const = 0;

	/** Writes the given BYTE at the given memory location */
	virtual void write(const BYTE data, const int position) = 0;
};
