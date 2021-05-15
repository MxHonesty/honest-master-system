#pragma once
#include <exception>
#include <string>


class MemoryException : std::exception {
public:

	/** Constructor */
	MemoryException(const char* error_message = "") : std::exception{error_message} {}
};
