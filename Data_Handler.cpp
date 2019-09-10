  // Copyright 2019 <Artem>

#include "Data_Handler.h"
#include <fstream>
#include <iostream>

void DataHandler::read() {
	for (int i = 0; i < info.size(); i++) {
		std::cout << info[i] << std::endl;
	}
}

void  DataHandler::data(std::string const& name) {
	std::ifstream file(name);
	if (file.is_open()) {
		while (file.good()) {
		std::string line;
		getline(file, line, '\n');
		info.push_back(line);
		}
	} else {
		std::cout << "File is not opened\n";
	}
}

void DataHandler::head(unsigned n){
	for (int i = 0; i <= n; i++) {
		std::cout << info[i] << std::endl;
	}
}

void DataHandler::tail(unsigned n){
	for (int i = 1; i <= n + 1; i++) {
		std::cout << info[(info.size()) - i] << std::endl;
	}
}
