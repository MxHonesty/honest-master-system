#pragma once
#include "memory/Memory.h"
#include "base/types.h"
#include <string>
using std::string;

/** Class resposible for storing ROM data. */
class Rom {

private:
	string filename;
	Memory* header;
	Memory* rom_memory;
	
public:
	
	/** Implicit constructor */
	Rom();

	/** Constructor from filename
	* @param name_of_file - a string representing the name
	* of the rom file on disk.
	*/
	Rom(const string& name_of_file) : filename{ name_of_file } {};

	/** Loads the ROM into memory. */
	void load_from_file();

	/** Determines if the this ROM is CodeMasters 
	* CodeMasters games use their own memory mapper
	* so we need to know if a ROM is a CodeMasters game or not. 
	* In order to determine if a ROM is a CodeMasters
	* ROM we need to check the header.
	* Ref: https://www.smspower.org/Development/ROMHeader#Checksum7ffa2Bytes
	* 
	* @returns true - if the ROM is CodeMasters
	*/
	bool is_code_masters() const;
};
