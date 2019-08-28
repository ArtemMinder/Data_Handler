#include "Data_Handler.h"

void DataHandler::read() {
	for (int i = 0; i < info.size(); i++) {
		std::cout << info[i] << std::endl;
	}
}

void  DataHandler::data() {
	std::string fileName;
	std::cout << "Enter the name of file: ";
	std::cin >> fileName;
	std::ifstream file(fileName);
	while (file.good()) {
		std::string line;
		getline(file, line, ',');
		info.push_back(line);
	}
}

int main() {
	DataHandler o1;
	o1.data();
	o1.read();
	return 0;
}