  // Copyright 2019 <Artem>

#pragma once
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>

class DataHandler {
public:
	void read();
	void data(std::string const& name);
private:
	std::vector<std::string>  info;
};
