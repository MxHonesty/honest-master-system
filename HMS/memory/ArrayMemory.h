#pragma once
#include "Memory.h"
#include "../base/types.h"
#include <memory>

// Memory implementation that stores the data inside an array.
class ArrayMemory : public Memory {
private:
	std::unique_ptr<BYTE[]> physical;
	unsigned int dim;

public:

	ArrayMemory(const unsigned int size = 0x100000) {
		physical = std::make_unique<BYTE[]>(size);
		dim = size;
	}

	/** Reads the BYTE on the given position in memory. */
	BYTE read(const int position) const override;

	/** Reads the WORD at the given position in memory. */
	WORD read_word(const int position) const override;

	/** Writes the given BYTE at the given memory location */
	void write(const BYTE data, const int position) override;
};
