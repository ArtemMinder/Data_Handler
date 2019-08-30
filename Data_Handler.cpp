  // Copyright 2019 <Artem>

#include "Data_Handler.h"

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
  getline(file, line, ',');
  info.push_back(line);
  }
} else {
std::cout << "File is not opened\n";
}
}
