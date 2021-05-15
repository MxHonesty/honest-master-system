#include "pch.h"

#include "../HMS/memory/ArrayMemory.cpp"

TEST(ArrayMemoryTest, Create) {
	ArrayMemory mem{ 100 };

	mem.write(0xBA, 10);
	EXPECT_EQ(mem.read(10), 0xBA);
}

/** Test for  */
TEST(ArrayMemoryTest, OutOfBoundsTest) {
	ArrayMemory mem{ 100 };

	EXPECT_THROW(mem.write(10, -1), MemoryException);
	EXPECT_THROW(mem.write(10, 100), MemoryException);
	EXPECT_THROW(mem.write(10, 101), MemoryException);
}
