#include "ArrayMemory.h"
#include "../exceptions/MemoryException.h"


BYTE ArrayMemory::read(const int position) const {
    if (position < 0 || position >= dim)
        throw MemoryException{ "Read out of range" };

    return physical.get()[position];
}

WORD ArrayMemory::read_word(const int position) const {
    WORD value = this->read(position + 1) << 8;
    value |= this->read(position);
    return value;
}

void ArrayMemory::write(const BYTE data, const int position) {
    if (position < 0 || position >= dim)
        throw MemoryException{ "Write out of range" };

    physical.get()[position] = data;
}
