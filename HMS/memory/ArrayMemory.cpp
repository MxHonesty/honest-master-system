#include "ArrayMemory.h"

BYTE ArrayMemory::read(const int position) const {
    // TODO: add range checking.

    return physical.get()[position];
}

void ArrayMemory::write(const BYTE data, const int position) {
    // TODO: add range checking.

    physical.get()[position] = data;
}
