#pragma once
#include <string>

#include "../Game.h"
#include <fstream>
#include <iostream>

class CRSC_Map
{
public:

	CRSC_Map();
	~CRSC_Map();

	static void Load(std::string path, int sizeX, int sizeY);

private:

};

