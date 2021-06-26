// This module implements a basic testing suite for all the functionalities
// of the ArrayMemory Memory implementation.
#include "pch.h"

#include "../HMS/memory/ArrayMemory.cpp"

/** Test case for creating an ArrayMemory instance. */
TEST(ArrayMemoryTest, Create) {
	ArrayMemory mem{ 100 };

	mem.write(0xBA, 10);
	EXPECT_EQ(mem.read(10), 0xBA);
}

/** Test for bound checking on writing memory. */
TEST(ArrayMemoryTest, OutOfBoundsTest) {
	ArrayMemory mem{ 100 };

	EXPECT_THROW(mem.write(10, -1), MemoryException);
	EXPECT_THROW(mem.write(10, 100), MemoryException);
	EXPECT_THROW(mem.write(10, 101), MemoryException);
}

/** Test case for reading a WORD value at a given position. */
TEST(ArrayMemoryTest, ReadWordTest) {
	ArrayMemory mem{ 100 };
	mem.write(0xAA, 1);
	mem.write(0xBB, 2);
	EXPECT_EQ(mem.read_word(1), 0xBBAA);
}
