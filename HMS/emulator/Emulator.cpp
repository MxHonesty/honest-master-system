#include "Emulator.h"

void Emulator::Update() {
	const double MACHINE_CLICKS_PER_FRAME = 10738580 / 60;
	unsigned int clicks_this_update = 0;

	while (clicks_this_update < MACHINE_CLICKS_PER_FRAME) {
		// Here we synchronize the interal clocks. and execute the commands.
	}
}
