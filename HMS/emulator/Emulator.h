#pragma once
#include "../memory/Memory.h"
#include "../Rom.h"

/** */
class Emulator {
private:

	Memory* game_memory;
	Memory* internal_memory;

public:

	/** Implicit constructor */
	Emulator();

	/** Loads the ROM into memory.
	* @param filename - The name of the ROM file.
	*/
	void insert_rom(const Rom& rom);

	/** Main loop of emulator. */
	void Update();
};
