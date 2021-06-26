#include "Rom.h"
#include "base/types.h"

void Rom::load_from_file() {

}

bool Rom::is_code_masters() const {
	WORD checksum = rom_memory->read_word(0x7ffa);  // We read the WORD at 0x7ffa memory position

	if (checksum == 0x0)
		return false;

	WORD value = 0x10000 - checksum;
	WORD answer = rom_memory->read_word(0x7ffc);

	return value == answer;
}
