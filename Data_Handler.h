  // Copyright 2019 <Artem>

#pragma once
#include <string>
#include <vector>

class DataHandler {
public:
	void read();
	void data(std::string const& name);
	void head(unsigned n = 5);
	void tail(unsigned n = 5);
private:
	std::vector<std::string>  info;
};
