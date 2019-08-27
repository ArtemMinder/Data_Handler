#pragma once

#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>
class DataHandler {
public:
	std::string fileName;
	explicit const DataHandler(std::string filename);
		
	void read();
	void data();
private:
	std::vector<std::string>  info;
};
